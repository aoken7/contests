import numpy as np

n,k = map(int,input().split())
r,s,p = map(int,input().split())
t = list(input())

ans = 0

for i in range(n):
    if i - k >= 0 and t[i-k] == t[i]:
        t[i] = '#'
        continue
    
    if t[i] == 'r':
        ans += p
    elif t[i] == 's':
        ans += r
    else:
        ans += s
    

print(ans)