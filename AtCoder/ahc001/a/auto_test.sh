#!/bin/bash
files=`find tools/in`

for file in $files:
do
    file=(${file//./ })
    file=(${file//\// })
    #echo '-------------'
    #echo ${file[2]}'.txt'
    ./make_svg.sh ${file[2]}
    sleep 1
done