#!/bin/bash
files=`find tools/in`

g++ main.cpp -DDEBUG
SUM=0

for file in $(ls $files);
do
    echo $file
    RESULT=$( ./a.out < $file )
    SUM=$(($SUM+$RESULT))
done
echo $SUM