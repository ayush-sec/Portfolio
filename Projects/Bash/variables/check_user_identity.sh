#!/bin/bash
echo "Enter your name"
read name
if [[ name == "$USER" ]]; then
echo "Respect my authority!"
else
echo "Hello $name"
fi
