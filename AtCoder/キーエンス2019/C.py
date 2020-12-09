import numpy as np

n = int(input())
a = np.array(list(map(int,input().split())))
b = np.array(list(map(int,input().split())))
c = [a[i]-b[i] for i in range(n)]

diff = 0
cnt = 0

for i in range(n):
    if b[i] > a[i]:
        diff += b[i] - a[i]
        cnt+=1

    
if np.sum(a - b) < 0:
    print(-1)
    exit(0)

c.sort()
c = c[::-1]

i = 0
while diff > 0 and i < n:
    diff -= c[i]
    i+=1
    cnt+=1


print(cnt)