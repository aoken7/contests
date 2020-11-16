import numpy as np

n = int(input())

a = []
b = []

for i in range(n):
    x,y = map(int,input().split())
    a.append(x)
    b.append(y)

a = np.array(a)
b = np.array(b)

ans = 0
pre = 0

for i in range(n):
    j = n - i - 1
    a[j] += pre
    sub = b[j] - (a[j] % b[j])
    if a[j] % b[j] == 0:
        sub = 0
    ans += sub
    pre += sub

print(ans)