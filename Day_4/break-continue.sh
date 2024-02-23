#!/bin/bash

i=20
<<mycomment
while [ $i -gt 5 ]
do
	echo "value of i = $i"
	(( i = i -5 ))
	if [ $i -eq 10 ]
	then
	break
	fi
done
mycomment
while [ $i -gt 5 ]
do
        echo "value of i = $i"
        (( i = i -5 ))
        if [ $i -eq 10 ]
        then
        continue
        fi
done
