#!/bin/bash

read -p "Enter the directory name: " a

if [ -d "$a" ]
then
echo "$a exists"

else
echo "$a dosen't exists"
fi
