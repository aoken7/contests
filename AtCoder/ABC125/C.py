import numpy as np
import copy

n = int(input())
a = np.array(list(map(int,input().split())))

ans = 0
l = np.lcm.reduce(a)

for i in range(n):
    b = copy.copy(a)
    b[i] = l
    gcd = np.gcd.reduce(b)
    if gcd > ans:
        ans = gcd

print(ans)