import math

n, k = map(int,input().split())
a = list(map(int,input().split()))

diff = set([i+1 for i in range(n)]) - set(a)

p = []
for i in range(n):
    x, y = map(int,input().split())
    p.append((x,y))

def dis(p1, p2):
    return math.sqrt(pow(p2[0]-p1[0],2) + pow(p2[1]-p1[1],2))

dd = [i for i in range(len(diff))]

max_d = 0
pair = ()
for i in a:
    tmp_l = []
    for j in list(diff):
        d = dis(p[i-1],p[j-1])
        if d > max_d:
            max_d = d
            pair = (i,j)
        tmp_l.append(d)
    print(sorted(tmp_l))

print(pair)
print(max_d)