#!/bin/bash

for user in `cat List_user.txt`; do echo "Make folder $user"; mkdir $user ; done


