#!/bin/bash

sed -e '/\[Insert here\]/r a.txt' -e '/\[Insert here\]/d' data.txt

