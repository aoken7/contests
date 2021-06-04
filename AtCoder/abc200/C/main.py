def cmb(n, r, p):
    if (r < 0) or (n < r):
        return 0
    r = min(r, n - r)
    return fact[n] * factinv[r] * factinv[n-r] % p

p = 10 ** 9 + 7
N = 10 ** 6  # N は必要分だけ用意する
fact = [1, 1]  # fact[n] = (n! mod p)
factinv = [1, 1]  # factinv[n] = ((n!)^(-1) mod p)
inv = [0, 1]  # factinv 計算用
 
for i in range(2, N + 1):
    fact.append((fact[-1] * i) % p)
    inv.append((-inv[p % i] * (p // i)) % p)
    factinv.append((factinv[-1] * inv[-1]) % p)


n = int(input())
a = list(map(int,input().split()))

for i in range(n):
    a[i] %= 200

d = {}

for i in a:
    if i not in d.keys():
        d[i] = 1
    else:
        d[i]+=1

ans = 0

for i in d.items():
    ans += cmb(i[1],2,int(1e9+7))

print(int(ans))