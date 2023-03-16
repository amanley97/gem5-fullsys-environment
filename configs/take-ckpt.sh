#!/bin/bash

#Gem5
GEM5_DIR=$(pwd)/../gem5                    #Gem5 Directory
GEM5_EXE=$GEM5_DIR/build/ARM/gem5.opt      #Gem5 Executable

#Resources
VMLINUX=$(pwd)/../resources/vmlinux        #Linux Kernel
BOOTLD=$(pwd)/../resources/boot.arm64      #ARM Bootloader
IMG=$(pwd)/../resources/rootfs.ext2        #Root Filesystem

#Full System Config
FS_CONFIG=$(pwd)/armFS.py                  #ARM Full System Configuration

#System Configs
CORES=4                                    #Number of CPU cores

CP=$(pwd)/ckpt                             #Checkpoint directory
RCS=$(pwd)/rcS/single                      #rcS directory
CP_SCRIPT=$RCS/hack_back_ckpt.rcS          #Checkpoint script

#------------------------------------------------------------------------------#

#Parameter Array
params=("--kernel=$VMLINUX"         \
        "--disk=$IMG"               \
        "--bootloader=$BOOTLD"      \
        "--num-cores=$CORES"        \ 
        "--cpu=atomic"              \
        "--checkpoint-dir=$CP"      \
        "--script=$CP_SCRIPT"       )

#------------------------------------------------------------------------------#

echo -e "\nRunning Gem5 full system simulation to take checkpoint!\n"

$GEM5_EXE	                            \
            ${debug[@]}                 \
			$FS_CONFIG			        \
            ${params[@]}                \

#------------------------------------------------------------------------------#
