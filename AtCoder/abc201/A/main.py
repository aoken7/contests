#!/usr/bin/env python3
import numpy as np

a = list(map(int,input().split()))

a.sort()

if a[2] - a[1] == a[1] - a[0]:
    print("Yes")
else:
    print("No")