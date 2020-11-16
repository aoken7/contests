#pdf見て解答

import queue
import numpy as np

n, k = map(int,input().split())
x = list(map(int,input().split()))

ans = int(1e9)

if n == 1:
    print(x[0])
    exit(0)

for i in range(n-k+1):
    l = i
    r = i + k - 1
    ans = min(ans, abs(x[r]) + abs(x[l] - x[r]), abs(x[l]) + abs(x[r] - x[l]))

print(ans)