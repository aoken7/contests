#pdf見て解答

mod = int(1e9 + 7)


def con(n,r,mod):
    ret = 1
    for i in range(1,r+1):
        ret = (ret * (n-i+1) * pow(i,mod-2,mod)) % mod
    return ret

x,y = map(int,input().split())

if (x + y) % 3 != 0:
    print(0)
    exit(0)

n = (2*y-x) // 3
m = (2 *x-y) // 3

if n < 0 or m < 0:
    print(0)
    exit(0)


ans = con(n+m,m,mod)

print(ans)