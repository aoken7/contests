n = int(input())

a = []
b = []

for i in range(n):
    x,y = map(int,input().split())
    a.append(x)
    b.append(y)

ans = 0

for i in range(n):
    ans += b[i]*(b[i]+1)/2 - (a[i]-1)*(a[i])/2

print(int(ans))