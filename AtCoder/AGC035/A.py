import numpy as np

n = int(input())
a = np.array(list(map(int,input().split())))

a = set(a)

b = a.pop()

for i in a:
    b ^= i

if b == 0:
    print("Yes")
else:
    print("No")
    