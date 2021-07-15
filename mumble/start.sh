#!/bin/bash

#named parameters taken from:
#https://stackoverflow.com/questions/192249/how-do-i-parse-command-line-arguments-in-bash
POSITIONAL=()
while [[ $# -gt 0 ]]; do
  key="$1"

  case $key in
    --gsc)
      GSC="$2"
      shift # past argument
      shift # past value
      ;;
    --key)
      KEY="$2"
      shift # past argument
      shift # past value
      ;;
    --sgx-enclave)
      SGX_ENCLAVE="$2"
      shift # past argument
      shift # past value
      ;;
    --sgx-isgx)
      SGX_ISGX="$2"
      shift # past argument
      ;;
    *)    # unknown option
      POSITIONAL+=("$1") # save it in an array for later
      shift # past argument
      ;;
  esac
done
echo "gsc-path        = ${GSC}"
echo "key-path        = ${KEY}"
echo "SGX_ENCLAVE     = ${SGX_ENCLAVE}"
echo "SGX_ISGX        = ${SGX_ISGX}"


docker image rm -f mumble-database
docker image rm -f mumble-server

docker container rm -f mumble-database
docker container rm -f mumble-server

docker build --iidfile ./containerid -t mumble/server -f ./mumble-server/Dockerfile ./mumble-server/
read -r ID < ./containerid
ID=${ID:7}
echo "ID              =${ID}"
MUMBLE_LOCATION=$PWD
cd ${GSC}
./gsc build --rm -c ${MUMBLE_LOCATION}/gsc-config.yaml --insecure-args ${ID} ${MUMBLE_LOCATION}/mumble-server/mumble.manifest
./gsc sign-image -c ${MUMBLE_LOCATION}/gsc-config.yaml ${ID} ${KEY}

cd ${MUMBLE_LOCATION}
touch .env
echo SGX_ENCLAVE=${SGX_ENCLAVE} >> .env
echo SGX_ISGX=${SGX_ISGX} >> .env
echo ID=${ID} >> .env

docker-compose up --build --force-recreate

rm .env
