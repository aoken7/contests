c = int(input())

a = [ [] for _ in range(c)]

for i in range(c):
    a[i] = list(map(int,input().split()))
    a[i].sort()

n = 0
m = 0
l = 0

for i in range(c):
    n = max(n,a[i][0])
    m = max(m,a[i][1])
    l = max(l,a[i][2])

print(n * m * l)
