# Run Pytorch inside a Graphene Shielded Container
## Prerequisites
To run Pytorch inside a container you need to install the dependencies from [Graphene](https://graphene.readthedocs.io/en/latest/manpages/gsc.html#prerequisites)
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
3. Build the dockerfile
In the graphene repository edit the dockerfile `Tools/gsc/test/ubuntu18.04-pytorch.dockerfile`.
Comment out the line and change the run path to this:
```
# WORKING_DIR /graphene/Examples
RUN python3 /graphene/Examples/download-petrained-model.py
```

This must be done. If not, then the command `./gsc info-image gsc-pytorch` won't run and the following error message will occur:
```bash
./gsc info-image gsc-pytorchh
Traceback (most recent call last):
  File "/home/xxx/git/graphene/Tools/gsc/./gsc", line 12, in <module>
    sys.exit(main(sys.argv))
  File "/home/xxx/git/graphene/Tools/gsc/./gsc.py", line 416, in main
    return args.command(args)
  File "/home/xxx/git/graphene/Tools/gsc/./gsc.py", line 339, in gsc_info_image
    with open(os.path.join(tmpdirname, "entrypoint.sig"), 'rb') as sig:
FileNotFoundError: [Errno 2] No such file or directory: '/tmp/tmpp01k1g7d/entrypoint.sig'
```

Build the dockerfile
```bash
docker build -t pytorch -f test/ubuntu18.04-pytorch.dockerfile .
```

4. Now the docker image needs to be graphenized using **gsc build**. Here we are using the *ubuntu18.04-python3.manifest*:
```bash
./gsc build --insecure-args pytorch test/ubuntu18.04-pytorch.manifest
```
5. Now that the graphene image is build. It needs to be signed with the enclave-key:
```bash
./gsc sign-image pytorch enclave-key.pem
```
6. Get the informations from the graphenized image(Notice that gsc preceeds the image name with **gsc-**):
```bash
./gsc info-image gsc-pytorch
```
7. Run the docker container with the following command. Don't forget to set your sgx device. In our case we used `--device=/dev/sgx_enclave`:
```bash
docker run --device=/dev/sgx_enclave \
   -v /var/run/aesmd/aesm.socket:/var/run/aesmd/aesm.socket \
   -it --entrypoint bash gsc-pytorch
```
This command starts the docker container, adds the device `/dev/sgx_enclave` from the host to the container, allocates a pseudo-TTY and overwrites the default entrypoint.

Now your Terminal should be inside the container.

If all of the steps above succeds, then you can now move into the directory `/graphene/Examples` and run 
```bash
python3 pytorchexample.py
```
Afterwards there appears a file named `result.txt`.
