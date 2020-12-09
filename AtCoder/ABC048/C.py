import copy
import numpy as np

n,x = map(int,input().split())
a = np.array(list(map(int,input().split()))+[0])
b = copy.deepcopy(a)

ans = 0

for i in range(n):
    if a[i] + a[i+1] > x:
        ans += a[i] + a[i+1] - x
        a[i+1] = x - a[i]

print(np.sum(b-a))

#なんか出来た、多分貪欲にやればいい