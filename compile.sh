#!/bin/bash
# this file is to delete the build folder and compile pattern-testing

echo "----- MAKE SURE YOU ARE AT DIRECTORY $(pwd)"
sleep 2
echo
 
rm -rf build
echo "----- Build folder is deleted -----"
sleep 1
echo
echo "----- Start to run build.sh -----"
sleep 1
echo

./build.sh

echo 
echo "----- End of building -----"
echo 
scp build/bin/pattern-test root@10.100.32.150:/usr/bin
#scp build/bin/retrieveData root@10.100.32.150:/usr/bin
#scp build/bin/libplatform.so.0.0.1 root@10.100.32.150:/usr/lib

