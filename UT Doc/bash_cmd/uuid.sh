#!/bin/bash 

path="C:\Work\bash_cmd\99_exercise\00_BASH\New_Training\TCODE\SampleApp\cdf\App_ADC_U2AEVA1_BGA516.arxml"

#temp="grep UUID= $path"

grep UUID $path | awk -F '"' '{print $2}' | head -3



