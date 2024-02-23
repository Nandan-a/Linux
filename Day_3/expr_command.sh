#!/bin/bash

<<command_substitution
always use ``(back tick)
command_substitution

# num1=$1
# num2=$2

# sum=`expr $num1 + $num2` 
# echo $sum

list_files=`ls -l`
echo $list_files
ret_val=`echo $?`
echo $ret_val
if [[ $ret_val -eq 0 ]]
then
    echo "command sucessfull"
fi

