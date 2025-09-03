#!/bin/bash

read -p "Enter the name of the file: " file_name

if [ -f "$file_name" ]
then
	if [ -w "$file_name" ]
	then
		echo "Type some text to quit press ctrl + d "
		cat >> "$file_name"

	else
		echo "File Do not have write permissions"
	fi


else
	echo "get"
fi
