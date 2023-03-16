#!/bin/sh
#
#This is an example runscript for gem5
#

#Run a command in linux simulation
echo Beginning example script...

#Reset gem5 stats
m5 resetstats

#Run your commands
uname -a

#Output stats to m5out
m5 dumpstats

#End the simulation
echo Done.
echo Ending the Simulation!

#Exit gem5
/sbin/m5 exit
