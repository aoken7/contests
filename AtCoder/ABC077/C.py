n = int(input())
a = list(map(int,input().split()))
b = list(map(int,input().split()))
c = list(map(int,input().split()))

a.sort()
b.sort()
c.sort()

ans = [0] * n

pa, pb,pc = 0, 0, 0

for i in range(n):
    while pb < n and b[pb] < a[i]:
        while pc < n and c[pc] < b[pb]:
            ans[i] += 1
            bc+=1