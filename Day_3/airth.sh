#!/bin/bash



x=2
y=7 

((sum=x+y))
echo "x + y :$sum"

sum_val=$(($x + $y))
echo "\$((\$x + \$y)) is $sum_val"


x=7
((x++))
echo "x++ : $x"

((--x))
echo "--x :$x"

((++x + --x))
echo "++x + x-- : $x"