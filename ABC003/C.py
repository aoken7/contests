import numpy as np

n,k = map(int,input().split())
r = list(map(int,input().split()))

r.sort()

ans = 0
for i in r[len(r) - k::]:
    ans = (ans + i)/2

print(ans)