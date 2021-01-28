#!/usr/bin/env python3
import numpy as np

a,b = input().split()

a = [int(i) for i in list(a)]
b = [int(i) for i in list(b)]

print(max(sum(a), sum(b)))