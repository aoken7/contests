import numpy as np

n = int(input())
a = np.array(list(map(int,input().split())))

maxn = 0
ans = 0

for i in range(2,np.max(a) + 1):
    cnt = 0
    for j in range(n):
        if a[j] % i == 0:
            cnt += 1
    if cnt > maxn:
        maxn = cnt
        ans = i

print(ans)