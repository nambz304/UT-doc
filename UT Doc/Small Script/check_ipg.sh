#!/bin/bash

a=$(find -type f -name *.cop | grep test)

for file in $a
do
	n=$(sed -n '/User/, $p' $file | grep -c ci)

	f_name=$(echo $file | awk -F "/" '{print $2}')

	if [ $n -gt 0 ]
	then
		echo -e "$f_name \e[30;48;5;82m--> PASS \e[0m" 
	else
		echo -e "$f_name \e[30;48;5;9m--> FAIL \e[0m"	
	fi

	echo ""
done
read -n 1 -r -s -p $'Press enter to exit...\n'