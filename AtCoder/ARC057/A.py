import numpy as np

a,k = map(int,input().split())

if k == 0:
    print(int(2e12 - a))
    exit(0)

ans = 0
while a < 2e12:
    ans+=1
    a += 1 + k*a
    

print(ans)