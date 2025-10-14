#!/bin/bash

read -p "Enter the file name: " file_name

if [ -e $file_name ]
then
echo "$file_name : File exists"

else
echo "file not found"

fi
