#!/bin/bash

# START
if type -t powershell &> /dev/null
then
	OS=Windows
elif type -t brew &> /dev/null
then
	OS=Apple
else
	OS=Linux
fi
# END

echo $OS
