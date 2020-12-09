#pdf見て回答
#数列と仲良くなりたい

n, k = map(int,input().split())

mod = int(1e9+7)

ans = 0

for i in range(k,n+1):
    s = i-1
    t = n-i
    ans = ans + (n*(n+1)//2) - (s*(s+1)//2) - (t*(t+1)//2) + 1 % mod
    ans %= mod

ans = ans + 1 % mod

print(ans)