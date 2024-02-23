#!/bin/bash

expr 5 + 4
expr "5 + 4" 
expr 5+4
sum=$(( expr 10 + 5)) #you can alo write this as sum=$((10+5))
echo $sum
expr 5 \* $1  
#$1 command line argument, \ is remove special character,  #character


expr 5 % 2

#length of a variable
a="hello World"
echo ${#a}

