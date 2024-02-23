#!/bin/bash

echo "How long do you want to add +1"
read loop_count
current_count=0
while [[ $current_count -le $loop_count ]]
do
	(( current_count++ ))
	echo "current_count = $current_count"
done
