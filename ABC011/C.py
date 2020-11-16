import numpy as np

n = int(input())
ng1 = int(input())
ng2 = int(input())
ng3 = int(input())

ng = [ng1,ng2,ng3]

if n in ng:
    print("NO")
    exit(0)

for i in range(100):
    if not n - 3 in ng:
        n -= 3
    elif not n - 2 in ng:
        n -= 2
    elif not n - 1 in ng:
        n -= 1
    else:
        print("NO")
        exit(0)
    
    if n <= 0:
        break
    
if n <= 0:
    print("YES")
else:
    print("NO")