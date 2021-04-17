#!/usr/bin/env python3

import numpy as np

n,m = map(int,input().split())

a = set(map(int,input().split()))
b = set(map(int,input().split()))

c = a ^ b

sorted(c)

print(*c)