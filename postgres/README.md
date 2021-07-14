
:warning: | The development on this repository is currently paused because Graphene `gsc` does not support the docker `USER` command [#2527](https://github.com/oscarlab/graphene/issues/2527). See <a href="#problems">Problems</a> for more information.
:---: | :---

<br />
<p align="center">
  <h3 align="center">SGX : Graphene Shielded Containers for PostgreSQL</h3>

  <p align="center">
    A library to secure your database using Intel® Software Guard Extensions and Graphene
    <br />
    <br />
  </p>
</p>

<!-- TABLE OF CONTENTS -->
<details open="open">
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#build-the-graphenized-postgres-docker-image">Building</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#problems">Problems</a></li>
    <li><a href="#contributing">Contributing</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project

Using Graphene Shielded Containers (GSC) we provide the infrastructure to deploy a docker container for PostgreSQL protected by Intel® Software Guard Extensions enclaves using the Graphene Library OS.

### Built With

* [Intel® SGX Software Guard Extensions](https://www.intel.com/content/www/us/en/architecture-and-technology/software-guard-extensions.html)

For the implementation of this project, the Intel® Software Guard Extensions (SGX) technologie were used. Intel SGX is a security instruction set baked into many of Intel’s x86-based central processing units (CPUs). SGX gives developers the ability to split a computer’s memory into what are called enclaves, which are private, predefined areas in memory that can better protect users sensitive data. For more information check out [Intel® SGX Software Guard Extensions](https://www.intel.com/content/www/us/en/architecture-and-technology/software-guard-extensions.html)

For an easier overview of the installation instructions for Linux systems, follow the instructions on  [Intel(R) Software Guard Extensions for Linux* OS](https://github.com/dzygann/sgx_intel#intelr-software-guard-extensions-for-linux-os)


* [Graphene](https://grapheneproject.io/)

For further implementation, [Graphene SGX](https://grapheneproject.io/) and its [Graphene shielded containers](https://graphene.readthedocs.io/en/latest/manpages/gsc.html), which are still under development, were used. The gsc tool transforms a Docker image into a new image which includes the Graphene Library OS, manifest files, Intel SGX related information and executes the application inside an Intel SGX enclave using the Graphene Library OS. It should significantly simplify the use of SGX while using docker images. This technology will be used here to graphenize a Postgresql image.



<!-- GETTING STARTED -->
## Getting Started

This application needs hardware that supports [Intel® Software Guard Extensions](https://www.intel.com/content/www/us/en/support/articles/000028173/processors/intel-core-processors.html).

### Prerequisites

Make sure you installed the following software on your machine.

- [docker](https://docs.docker.com/get-docker/)
- [Graphene](https://graphene.readthedocs.io/en/latest/quickstart.html#quick-start-with-sgx-support)
- [Intel® Software Guard Extensions](https://downloadcenter.intel.com/de/product/80895)

Follow these instructions to prepare the build process.

1. Clone the [oscarlab/graphene](https://github.com/oscarlab/graphene) repository.
```sh
git clone git@github.com:oscarlab/graphene.git
```

2. Build Graphene following the [Quick start instructions](https://graphene.readthedocs.io/en/latest/quickstart.html#quick-start-with-sgx-support).

3. Move into the [Graphene Graphene Shielded Containers directory](https://github.com/oscarlab/graphene/tree/master/Tools/gsc).
```sh
cd graphene/Tools/gsc/
```

4. Clone the repository 
```sh
git clone git@github.com:enclaive/dockers.git
```

### Build the graphenized Postgres docker image

The instructions are based on the [Graphene gsc example](https://graphene.readthedocs.io/en/latest/manpages/gsc.html#example).

1. Create a configuration file.
```sh
cp config.yaml.template config.yaml
```

2. Generate the signing key (if you don’t already have a key).
```sh
openssl genrsa -3 -out enclave-key.pem 3072
```

3. Build the base docker image.
```sh
docker build -f postgres/ubuntu18.04-postgresql.dockerfile -t postgres-graphene postgres/
```

4. Graphenize the base docker image.
```sh
./gsc build --insecure-args postgres-graphene postgres/ubuntu18.04-postgresql.manifest
```


5. Build the base docker image.
```sh
./gsc sign-image postgres-graphene enclave-key.pem
```



## Usage

Run any PostgreSQL command inside the container. Make sure using the `--user=postgres` flag, because PostgreSQL does not allow interaction as `root`.

```sh
docker run --user=postgres --device=/dev/sgx_enclave -v /var/run/aesmd/aesm.socket:/var/run/aesmd/aesm.socket gsc-postgres-graphene -c "/usr/lib/postgresql/10/bin/psql --version"
```


## Problems

#### Failed to exchange the secret key via RPC: -21 graphene

This message may occur if your machine has not enough memory. Check [this Issue](https://github.com/oscarlab/graphene/issues/2434) and try to increase your SWAP size.

#### graphene-sgx-get-token: error: argument --output/-output: can't open '/entrypoint.token': [Errno 13] Permission denied: '/entrypoint.token'

Graphene `gsc` assumes the `root` user inside the docker container. Since PostgreSQL needs the `postgres` user to perform database transactions there is a clash of prerequisites [#2527](https://github.com/oscarlab/graphene/issues/2527).  
PostgreSQL does not allow the `root` user to interact with the service. There is no common workaround or quick fix available.


## Contributing

Built by Leon, Jannes and Tom.


