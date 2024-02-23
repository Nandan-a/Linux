#!/bin/bash

sum (){
	let result=$1+$2
	echo $result
}
echo  "Enter two numbers for their addition" 
read num1 num2

sum $num1 $num2
