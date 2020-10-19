#!/bin/bash

#total_signal=$(grep -r error ./log.txt | grep MESG | awk -F '"' '{print $2}' | awk -F "MESG_" '{print $2}' | sort -u)
#total_signal+=$(grep -r error ./log.txt | grep MESG | awk -F "'" '{print $2}' | awk -F "MESG_" '{print $2}' | sort -u)

if [ $1 == 1 ]	#MESG
then 
	total_signal=$(grep -r error ./log.txt | grep MESG | awk -F '"' '{print $2}' | awk -F "MESG_" '{print $2}' | sort -u)
	total_signal+=$(grep -r error ./log.txt | grep MESG | awk -F "'" '{print $2}' | awk -F "MESG_" '{print $2}' | sort -u)
	define_type='DefineMESGType_'
	define_mesg='DefineMESG'
elif [ $1 == 2 ] #Mechan
then
	total_signal=$(grep -r error ./log.txt | grep MESGCopyMechan | awk -F '"' '{print $2}' | awk -F "MESGCopyMechan" '{print $2}' | sort -u)
	total_signal+=$(grep -r error ./log.txt | grep MESGCopyMechan | awk -F "'" '{print $2}' | awk -F "MESGCopyMechan" '{print $2}' | sort -u)
	define_type='RBMESG_DefineMESGType_'
	define_mesg='RBMESG_DefineMESG'
else 			#RBMESG
	total_signal=$(grep -r error ./log.txt | grep RBMESG_ | awk -F '"' '{print $2}' | awk -F "RBMESG_" '{print $2}' | sort -u)
	total_signal+=$(grep -r error ./log.txt | grep RBMESG_ | awk -F "'" '{print $2}' | awk -F "RBMESG_" '{print $2}' | sort -u)
	define_type='RBMESG_DefineMESGType_'
	define_mesg='RBMESG_DefineMESG'
fi

echo ""
for signal in $total_signal
do
	type=$(echo $signal | awk -F "_" '{print $NF}')

	if [ $type == N ] || [ $type == UB ]
	then
		echo "$define_type""UB($signal);"
		echo "$define_mesg($signal);"
	else 
		echo "$define_type$type($signal);"
		echo "$define_mesg($signal);"
	fi
	
	echo ""
done

  
  
  
  
  
  
  
  
  
  
  