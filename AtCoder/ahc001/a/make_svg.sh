#!/bin/bash
#cargo run --release < tools/in/$1.txt > tools/out/$1.out
g++ main.cpp
SECONDS=0
./a.out < tools/in/$1.txt > tools/out/$1.out
time=$SECONDS
echo $time'sec'
cd tools
cargo run --release --bin vis in/$1.txt out/$1.out #> /dev/null 2>&1