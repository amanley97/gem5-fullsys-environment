# Resources

These are the files to run gem5 in full system mode.
Including the linux kernel, arm bootloader, and root filesystem.

We can use buildroot to create `rootfs.ext2` filesystems and load applications into gem5.

Follow these instructions to do so:

## Step 1: Download buildroot source

    git clone https://github.com/buildroot/buildroot.git
    make ARCH=aarch64 BR2_JLEVEL=$(nproc) CROSS_COMPILE=aarch64-linux-gnu- \
        -C buildroot/ arm_foundationv8_defconfig

## Step 2: Configure buildroot

Buildroot uses the `menuconfig` system to graphically select desired parameters.
    make ARCH=aarch64 BR2_JLEVEL=$(nproc) CROSS_COMPILE=aarch64-linux-gnu- \
        -C buildroot/ menuconfig

Our default parameters are:
- Target Options
  - Target Architecture -> AArch64 (little endian)
  - Target Architecture Variant -> Cortex-A57
- Toolchain
  - Kernel Headers -> Linux 5.4.x
- Kernel -> Disabled
- Target packages
  - BusyBox configuration file to use?
    - package/busybox/busybox-minimal.config
- Filesystem Images
  - enable ext2 

## Step 3: Build the diskimage

This step will take a few minutes.

    make ARCH=aarch64 BR2_JLEVEL=$(nproc) CROSS_COMPILE=aarch64-linux-gnu- \
        -C buildroot/


## Step 4: Add gem5 simtools to the disk

You can skip this step if you have built the disk image before.

We need to add the `m5` binary to enable gem5 magic commands.
    cp -r simtools/m5 <buildroot_dir>/output/target/sbin

Then we add the `S98` script to enable run script on startup.
    cp -r simtools/S98 <buildroot_dir>/output/target/etc/init.d

Lastly, replace the `inittab` file with ours to ensure S98 is run.
    cp -r simtools/inittab <buildroot_dir>/output/target/etc

## Step 5: Add any applications to run in gem5

The buildroot overlay system allows for files to be placed in the disk image.
In the directory: <buildroot_dir>/output/target/
The linux file system is mimicked.

## Step 6: Rebuild the diskimage and copy rootfs.ext2 to the resources directory

This step will take a few seconds this time.

    cd <buildroot_dir>
    make ARCH=aarch64 BR2_JLEVEL=$(nproc) CROSS_COMPILE=aarch64-linux-gnu-
    mv output/images/rootfs.ext2 ../resources/
