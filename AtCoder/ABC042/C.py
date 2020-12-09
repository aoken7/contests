import numpy as np

n,k = map(int,input().split())
d = set(list(map(int,input().split())))

ans = []

def f(l,num=""):
    if len(num) == 5:
        return
    
    for i in l:
        ans.append(int(num+str(i)))
        f(l, num+str(i))
    
    return

s = list(set(np.arange(0,10,1)) ^ d)

f(s)
ans.sort()

for i in ans:
    if i >= n:
        print(i)
        exit(0)