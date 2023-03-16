#!/bin/bash

# Gem5
GEM5_DIR=$(pwd)/../gem5                    # Gem5 Directory
GEM5_EXE=$GEM5_DIR/build/ARM/gem5.opt      # Gem5 Executable

# Resources
VMLINUX=$(pwd)/../resources/vmlinux        # Linux Kernel
BOOTLD=$(pwd)/../resources/boot.arm64      # ARM Bootloader
IMG=$(pwd)/../resources/rootfs.ext2        # Root Filesystem

# Full System Config
FS_CONFIG=$(pwd)/armFS.py                  # ARM Full System Configuration

# RunScript
SCRIPT_DIR=$(pwd)/run-scripts              # Gem5 Runscript Directory
SCRIPT=$SCRIPT_DIR/example.sh              # Simulation run script

# Debug Flags
debug_enabled=${1}                         # Use to enable gem5 debug output
dFlag=x                                    # Debug Flag Options

# System Configs
CPU=atomic                                 # CPU type (DEFAULT: atomic)
CORES=4                                    # Number of CPU cores

# Checkpoint Options
use_checkpoint=true                        # If true, we use the checkpoint
CP=$(pwd)/ckpt                             # Checkpoint directory
RCS=$(pwd)/rcS/single                      # rcS directory
CP_SCRIPT=$RCS/hack_back_ckpt.rcS          # Checkpoint script

#------------------------------------------------------------------------------#

#Parameter Array
params=("--kernel=$VMLINUX"         \
        "--disk=$IMG"               \
        "--bootloader=$BOOTLD"      \
        "--num-cores=$CORES"        )

if [ "$use_checkpoint" == true ] 
then
    params+=("--cpu=$CPU"           \
             "--script=$SCRIPT"     \
             "--checkpoint-dir=$CP" \
             "--restore"            )    
else
    params+=("--cpu=atomic"         \
             "--script=$CP_SCRIPT"  )

fi

#Debug Array
if [ "$debug_enabled" == "Y" ] 
then
    debug+=("--debug-flags=$dFlag")   
else
    debug=()
fi

#Help
if [ "${1}" == "" ] 
then
    echo -e "\nScript to run Gem5 full system simulation\n"
    echo "Parameters are needed to run!"
    echo -e "run-single.sh [enable-debugging=Y/n] \n"
else
#------------------------------------------------------------------------------#

$GEM5_EXE	                            \
            ${debug[@]}                 \
			$FS_CONFIG			        \
            ${params[@]}                \

#------------------------------------------------------------------------------#
fi
