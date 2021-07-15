# Mumble Server Protected by Graphene Shielded Container

[Mumble](https://github.com/mumble-voip/mumble) is a open source voice chat software. In this example, we build a docker from  the mumble-server and wrap it with the Graphene Shielded Container (GSC). 

## Prerequisite
- SGX enabled hardware 
  - Check [Intel SGX Hardware Support](https://www.intel.com/content/www/us/en/support/articles/000057420/software/intel-security-products.html) and [is_sgx_available](https://graphene.readthedocs.io/en/latest/manpages/is_sgx_available.html) from Graphene
- SGX is installed 
  - [SGX Installation](https://github.com/enclaive/sgx_wiki)
- Pull the [Graphene repository](https://github.com/oscarlab/graphene) and follow the [installation instructions](https://graphene.readthedocs.io/en/latest/manpages/gsc.html)
- Install the mumble client `sudo apt install mumble`
- If you want to test mumble outside of you localhost, you have to forward the mumble port 64738 

## Getting Started
We deliver a script to make the start as easy as possible. You can find it in this folder. To run it you need to add 4 arguments:
- `--gsc` expects the path to your local gsc folder from the Graphene repository
- `--key` expects the path to your signing key from the second step from the GSC installation instructions.
- `--sgx-isgx` expects the path to your isgx location
- `--sgx-enclave` expects the path to your gsgx location

Example:
```sh
./start.sh --gsc /home/bob/graphene/Tools/gsc --key /home/bob/graphene/Pal/src/host/Linux-SGX/signer/enclave-key.pem --sgx-enclave /dev/sgx_enclave --sgx-isgx /dev/isgx
```

As soon as the script is done you can connect with a Mumble client to the GSC Mumble server.

### Start script flow
In the first step the script removes existing docker containers and images from your local machine if you build them already. Then it builds a docker from the mumble-server. The next steps are to build the image and sign it with the GSC commands. The last step triggers the docker-compose. 
The docker compose file defines two dockers. The first one is a MySQL Docker, which is needed by the Mumble server. The second docker container is the shielded Mumble server.

## Limitations
Due to the fact, that the GSC is in development, we had to make some workarounds. The `start.sh` makes use of `config.yml` file, which points to a forked Graphene repository. This repository is a working version of GSC plus a fix for IPV6 [Emulate IPV6_V6ONLY both in LibOS and PAL #2495](https://github.com/oscarlab/graphene/pull/2495). 

Mumble uses by default a SQLite database. Unfortunately, SQLite comes with file locking and this one is not yet working with Graphene[File Locking Issue](https://github.com/oscarlab/graphene/issues/2423#issuecomment-855421061). 
