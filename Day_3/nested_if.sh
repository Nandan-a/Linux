#!/bin/bash
if [[ $1 -gt 0 ]]
then
    echo " $1 is greater then 100 "
    if (( $1 % 2 == 0 ))
    then
        echo "Number is even"

    else
        echo "Number is odd"
    fi
else
echo "0 is Natural number" 
fi
