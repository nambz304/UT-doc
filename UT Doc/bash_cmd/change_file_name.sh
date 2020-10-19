#!/bin/bash

path="./test"
#user="nam.phan-the"

for user in `cat $path/List_user.txt`
do
	file_name="$user-`date +%D | sed 's/\//./g'`"
	mv $path/$user $path/$file_name
done




