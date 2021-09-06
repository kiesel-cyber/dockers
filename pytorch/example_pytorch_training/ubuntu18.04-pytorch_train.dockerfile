From ubuntu:18.04

RUN apt-get update \
    && apt-get install -y python3 python3-pip \
    && pip3 install torch torchvision \
    && mkdir -p /graphene/Examples \
    && mkdir -p /pytorch_train \
    && mkdir -p /root/.cache/torch/hub/checkpoints

# Build environment of this Dockerfile should point to the root of Graphene's Examples/
COPY pytorch_train /pytorch_train
COPY pytorch_train/models/squeezenet1_0-b66bff10.pth /root/.cache/torch/hub/checkpoints/

CMD  ["python3", "/pytorch_train/train.py"]
