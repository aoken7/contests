import numpy as np

n = int(input())
a = np.array(list(map(int,input().split())))

cnt_sub = 0

for i in a:
    if i < 0:
        cnt_sub += 1

if cnt_sub % 2 == 0:
    print(np.sum(np.abs(a)))
else:
    print(np.sum(np.abs(a)) - np.min(np.abs(a)) * 2)