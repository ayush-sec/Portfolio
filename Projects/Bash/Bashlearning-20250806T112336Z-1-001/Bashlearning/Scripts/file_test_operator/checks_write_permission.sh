#!/bin/bash

read -p "Write the file name : " a

if [ -w "$a" ]
then
echo "File has write permission"

else 
echo "File does not have write permissions"
fi

