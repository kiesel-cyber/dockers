# Run python inside a Graphene Shielded Container
## Prerequisites
To run python inside a container you need to install the dependencies from [Graphene](https://graphene.readthedocs.io/en/latest/manpages/gsc.html#prerequisites)
Furthermore you need a linux kernel version >= 5.11

## Getting started
First clone the git repo from [Graphene](https://github.com/oscarlab/graphene.git).

1. Copy the configuration file:
```bash
cd Tools/gsc
cp config.yaml.template config.yaml
```
2. If you don't have a signing key, then create one:
```bash
openssl genrsa -3 -out enclave-key.pem 3072
```
3. Pull the python dockerimage 
```bash
docker pull python
```

4. Now the docker image needs to be graphenized using **gsc build**. Here we are using the *ubuntu18.04-python3.manifest*:
```bash
./gsc build --insecure-args python test/ubuntu18.04-python3.manifest
```
5. Now that the graphene image is build. It needs to be signed with the enclave-key:
```bash
./gsc sign-image python enclave-key.pem
```
6. Get the informations from the graphenized image(Notice that gsc preceeds the image name with **gsc-**):
```bash
./gsc info-image gsc-python
```
7. Run the docker container with the following command. Don't forget to set your sgx device. In our case we used `--device=/dev/sgx_enclave`:
```bash
docker run --device=/dev/sgx_enclave \
   -v /var/run/aesmd/aesm.socket:/var/run/aesmd/aesm.socket \
    gsc-python -c 'print("HelloWorld!")'
```

Now the output `HelloWorld!` should appear.
