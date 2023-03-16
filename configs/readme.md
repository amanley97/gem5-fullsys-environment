# Configurations

We assume to have to following file structure for simulations:
```
gem5-fullsys-environment
 ┣ configs
 ┃ ┣ arm
 ┃ ┃ ┗ system.py
 ┃ ┣ armFS.py
 ┃ ┣ run-single.sh
 ┃ ┗ rcS
 ┃   ┗ single
 ┃      ┗ hack_back_ckpt.rcS
 ┣ resources
 ┃ ┣ boot.arm64
 ┃ ┣ vmlinux
 ┃ ┗ rootfs.ext2
 ┗ gem5

```

Use take-ckpt.sh to create a checkpoint after the linux kernel has booted.
Checkpoint data is stored under `ckpt/`

Gem5 saves statistics to `m5out/`