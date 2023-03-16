# GEM5 FULL-SYSTEM ENVIRONMENT

This is a simple baseline gem5 full system configuration.
It is ideal for running modifications and research quickly and efficiently.

I must credit other projects which have made this possible:
- [The Gem5 Simulator Project](https://github.com/gem5/gem5)
- [Buildroot,Embedded Linux Tool](https://github.com/buildroot/buildroot)
- [The Linux Kernel](https://github.com/torvalds/linux)

By default, gem5(v. 22.1.0.0) is built for the ARM ISA with no modifications.
The linux kernel is version 5.4 and the disk image contains no additional applications.

See [Resources](resources/readme.md) for info on how to rebuild a disk image with applications.

The directory `configs/` contains the scripts which define the simulated system.
Modify `configs/run-single.sh` to change simulation parameters.
Running `configs/take-ckpt.sh` will take a checkpoint of the system, post kernel boot.

Thanks for using and Happy Tinkering!