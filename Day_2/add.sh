#!/bin/bash

read -p 'enter a number ' num1
echo 
read -p 'enter a number ' num2
echo 
echo $num1 % $num2 = $(( $num1 % $num2 ))
echo $num1 \* $num2 = $(( $num1 * $num2 ))
break
echo $num1 + $num2 = $(( $num1 + $num2 ))
echo $num1 - $num2 = $(( $num1 - $num2 ))
echo $num1 / $num2 = $(( $num1 / $num2 ))
# echo the symbol is $ 