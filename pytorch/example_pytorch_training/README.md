# Pytorch training example
The goal of this repository is to finetune a pretrained network inside a graphene shielded container(GSC). Afterwards the finetuned network is used to classify an image inside an additional graphene shielded container.

## Training the network 
The first step is to follow the finetuning example by pytorch: [link]{https://pytorch.org/tutorials/beginner/finetuning_torchvision_models_tutorial.html}

### Adjustments for the pythonscript
We named our pythonscript `train.py`. If you have used a different filename then you have to adopt the dockerfile.

#### Train on CPU
Just to make sure you don't run into problems with your GPU, set the device to "cpu".
```python
device = torch.device("cpu")
```

#### Multithreading workaround
Graphene has removed Sys-V stuff[issue]{https://github.com/oscarlab/graphene/issues/1013}
The implementation of multithreading used by pytorch is not compatible with graphene shielded containers.
Based on [fastai]{https://github.com/fastai/fastai2/issues/153} the multithreading can be prevented by setting `num_workers=0`in the trainfile. 

```python
# Create training and validation datasets
image_datasets = {x: datasets.ImageFolder(os.path.join(data_dir, x), data_transforms[x]) for x in ['train', 'val']}
# Create training and validation dataloaders
dataloaders_dict = {x: torch.utils.data.DataLoader(image_datasets[x], batch_size=batch_size, shuffle=True, num_workers=0) for x in ['train', 'val']}

# Detect if we have a GPU available
device = torch.device("cpu")
```

If you ignore this workaround, you will run into the following exception.

```bash
Epoch 0/14
----------
Traceback (most recent call last):
  File "/pytorch_train/train.py", line 250, in <module>
    model_ft, hist = train_model(model_ft, dataloaders_dict, criterion, optimizer_ft, num_epochs=num_epochs, is_inception=(model_name=="inception"))
  File "/pytorch_train/train.py", line 58, in train_model
    for inputs, labels in dataloaders[phase]:
  File "/usr/local/lib/python3.6/dist-packages/torch/utils/data/dataloader.py", line 359, in __iter__
    return self._get_iterator()
  File "/usr/local/lib/python3.6/dist-packages/torch/utils/data/dataloader.py", line 305, in _get_iterator
    return _MultiProcessingDataLoaderIter(self)
  File "/usr/local/lib/python3.6/dist-packages/torch/utils/data/dataloader.py", line 891, in __init__
    self._worker_result_queue = multiprocessing_context.Queue()  # type: ignore[var-annotated]
  File "/usr/lib/python3.6/multiprocessing/context.py", line 102, in Queue
    return Queue(maxsize, ctx=self.get_context())
  File "/usr/lib/python3.6/multiprocessing/queues.py", line 42, in __init__
    self._rlock = ctx.Lock()
  File "/usr/lib/python3.6/multiprocessing/context.py", line 67, in Lock
    return Lock(ctx=self.get_context())
  File "/usr/lib/python3.6/multiprocessing/synchronize.py", line 162, in __init__
    SemLock.__init__(self, SEMAPHORE, 1, 1, ctx=ctx)
  File "/usr/lib/python3.6/multiprocessing/synchronize.py", line 59, in __init__
    unlink_now)
OSError: [Errno 38] Function not implemented
```

#### Save the network
Add `torch.save(model_ft, "/out/net.pt")` to the end of the `train.py` in order to save the finetuned network for later use.

### Dockerfile
* Create a folder named `pytorch_train` next to the dockerfile inside of `graphene/Tools/gsc` .
* Create a folder named `model` inside of the `pytorch_train` folder.
* Download the pretrained [model]{https://download.pytorch.org/models/squeezenet1_0-b66bff10.pth} and place it inside the models folder.
* The folder `hymenoptera_data` must be placed inside of the `pytorch_train` folder.
* Furthermore place the pyhton script `train.py` inside the `pytorch_train` folder.

Now you can use the dockerfile to create a gsc image.

```bash
echo "Build docker image"
docker build -t pytorch_train -f ubuntu18.04-pytorch_train.dockerfile .

echo "Build gsc image"
./gsc build --insecure-args pytorch_train ubuntu18.04-pytorch.manifest

echo "Sign gsc image"
./gsc sign-image pytorch_train  enclave-key.pem

echo "Validate image(INFO)"
./gsc info-image gsc-pytorch_train
```

Now you can run the dockerfile. Dont forget to replace the sgx device path with yours.
```bash
echo "Run docker image (docker run ..)"
docker run --device=/dev/sgx_enclave \
-v /var/run/aesmd/aesm.socket:/var/run/aesmd/aesm.socket \ 
-v /opt/pytorch_train/out:/out \ 
-it gsc-pytorch_train
```

## Using the trained network
### Prerequisites
* Follow the setup from `../example_pytorch`
### Changes
* Copy the finetuned network from the output of the training container, which is located at  `/opt/pytorch_train/out/net.pt` to `../example_pytorch`.

Run the following command.
```bash
docker run --device=/dev/sgx_enclave \
   -v /var/run/aesmd/aesm.socket:/var/run/aesmd/aesm.socket \
   -it --entrypoint bash -v /opt/graphene/out:/out gsc-pytorch
```

This command opens an interactive terminal, from which the following command can be run: 
```bash
cd /graphene/Examples/ && python3 pytorchexample.py
```
Now close the interactive terminal. The `result.txt` can now be found at `/opt/graphene/out/`

Remember before you run the gsc again delete the `result.txt`
