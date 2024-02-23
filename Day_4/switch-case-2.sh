#!/bin/bash

echo -e "Consider the following choices:\n1.1_min\n2.5_min\n3.10_min\n4.No. of processes running\n5.PID"
read user

case $user in
	1)
	one_min=`cat /proc/loadavg | cut -d " " -f 1`
	echo $one_min
	;;
	2)
	five_min=`cat /proc/loadavg | cut -d " " -f 2`
	echo $five_min
	;;
	3)
	ten_min =`cat /proc/loadavg | cut -d " " -f 3`
	echo $ten_min
	;;
	4)
	process_count=`cat /proc/loadavg | cut -d " " -f 4`
	echo $process_count
	;;
	5)
	pid=`cat /proc/loadavg | cut -d " " -f 5`
	echo $pid
	;;
	esac
