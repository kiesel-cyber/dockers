#Pytorch training example

# Setup
## Train on CPU
To train the net on the CPU set `device = troch.device("cpu")`.

## Multithreading workaround
Set `num_workers=0`in the trainfile. Else the following error occurs.

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

## Save the network
Add `torch.save(model_ft, "/out/net.pt")` to save the network inside the mounted volume.
