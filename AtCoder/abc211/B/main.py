#!/usr/bin/env python3

import numpy as np

s1 = input()
s2 = input()
s3 = input()
s4 = input()

l = [s1,s2,s3,s4]

if('H' in l and '2B' in l and '3B' in l and 'HR' in l):
    print("Yes")
else:
    print("No")