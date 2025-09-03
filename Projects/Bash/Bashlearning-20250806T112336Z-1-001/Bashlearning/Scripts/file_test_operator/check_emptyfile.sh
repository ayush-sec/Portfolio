#!/bin/bash

read -p "Enter the file name : " a

if [ -s "$a" ]
then 
echo "File is not empty"

else
echo "File is empty"
fi
