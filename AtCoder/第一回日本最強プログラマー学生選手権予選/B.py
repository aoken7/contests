n, k = map(int,input().split())
x = list(map(int,input().split()))
mod = int(1e9+7)

a = 0
d = 0

for i in range(0,n-1):
    for j in range(i+1, n):
        if x[j] < x[i]:
            a+=1

x = x + x

for i in range(0,len(x)-1):
    for j in range(i+1, len(x)):
        if x[j] < x[i]:
            d+=1

d = d - 2*a

ans = k * (2 * a + (k-1) * d) // 2

print(ans % mod)