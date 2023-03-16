# Checkpoints

This is a default generated checkpoint for gem5.

It occurs right after the kernel is booted so scripts will
immediately run upon simulation.

We use a 4 core atomic cpu when checkpointing.
Ensure that the number of cores matches before/after the checkpoint.

Run `take-ckpt.sh` to remake a checkpoint.