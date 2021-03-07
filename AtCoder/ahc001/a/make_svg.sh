#!/bin/bash
#cargo run --release < tools/in/$1.txt > tools/out/$1.out
g++ main.cpp
./a.out < tools/in/$1.txt > tools/out/$1.out
cd tools
cargo run --release --bin vis in/$1.txt out/$1.out 