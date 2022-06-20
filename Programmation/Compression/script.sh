#!/bin/bash

num=2500

while [ $num -ge 0 ]
do
	file=`echo "flag"$num*`
	tar -xf $file
	if [ $num -le 2500 ]
	then
		rm $file
	fi
	((num--))
done