import numpy as np
import math


n,p = map(int,input().split())
a = list(map(int,input().split()))

def com(n,r):
    return math.factorial(n) // math.factorial(r) // math.factorial(n - r)

gu = 0
ki = 0

for i in a:
    if i % 2 == 0:
        gu += 1
    else:
        ki += 1

ans = 0

if p == 0:
    for i in range(ki+1):
        if i % 2 == 0:
            ans += com(ki, i) * math.pow(2,gu)
else:

    for i in range(0,ki+1):
        if i % 2 == 1:
            ans += com(ki, i) *  math.pow(2,gu)

print(int(ans))