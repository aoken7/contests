import numpy as np

n,x = map(int,input().split())
a = np.array(list(map(int,input().split())))

ans = []
for i in a:
    ans.append(a**2)

print(a)