#!/bin/bash

declare -i intvar   #integer
intvar=15
echo $intvar
intvar=15.3            #will throw error only int is allowed
echo $intvar
#making a variable read only

declare -r ronlyvar=2020  #-r is nothing but constant
echo $ronlyvar
ronlyvar=2019 #not allowed
echo $ronlyvar