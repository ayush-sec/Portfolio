#!/bin/bash

read -p "Write the file name : " a

if [ -r "$a" ]
then
echo "File has read  permission"

else 
echo "File does not have read permissions"
fi

