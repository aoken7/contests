#!/bin/bash
files=`find tools/in`

for file in $files:
do
    SECONDS=0
    file=(${file//./ })
    file=(${file//\// })
    echo '-------------'
    echo ${file[2]}'.txt'
    ./make_svg.sh ${file[2]}
    time=$SECONDS
    echo $time'sec'
done