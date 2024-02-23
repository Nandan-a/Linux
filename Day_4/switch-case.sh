#!/bin/bash
read -p "Enter course name" centre

case $centre in
	pgdiot)
	echo "You wil earn above 10 lakh"
	;;
	pgdac)
	echo "You will no earn more than 3-5 lakh"
	;;
	pgdesd)
	echo "Placements don't look good for $centre"
	;;
	*)
	echo "All the best for your future"
	;;
	esac

