#!/bin/bash

dir_path="C:\Work\bash_cmd\99_exercise\00_BASH\New_Training"

dir_count=$(find $path -type d | wc -l) 
file_count=$(find $path -type f | wc -l)

echo "There are: $dir_count directory and $file_count file in New_Training"




