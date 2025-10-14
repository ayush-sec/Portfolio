#!/bin/bash

read -p "Write the file name : " a

if [ -x "$a" ]
then
echo "File has execute permission"

else
echo "File does not have execute permissions"
fi
