import numpy as np

n,a,b = map(int,input().split())
s = []
for i in range(n):
    s.append(float(input()))

s = np.array(s)

if np.max(s) - np.min(s) != 0:
    p = b / (np.max(s) - np.min(s))
else:
    p = 0

s *= p
q = a - np.sum(s) / len(s)

s += q

ave = int(np.sum(s) / len(s) + 0.5)
diff = int(np.max(s) - np.min(s) + 0.5)

if ave == a and diff == b:
    print(str(p) + " " + str(q))
else:
    print(-1)