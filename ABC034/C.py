mod = int(1e9+7)
w,h = map(int,input().split())

def mod_factorial(x):
    ret = 1
    while x > 1:
        ret = (ret * x) % mod
        x-=1
    return int(ret)

def modinv(a, m):
    b = m
    u = 1
    v = 0
    while b:
        t = a // b
        a -= t * b
        a,b = b,a
        u -= t * v
        u,v = v,u
    u %= m
    if u < 0:
        u += m
    return u


w -= 1
h -= 1

denominator = mod_factorial(w+h) 
numerator1 = mod_factorial(w)
numerator2 = mod_factorial(h)
ans = denominator * modinv(numerator1 * numerator2 % mod, mod) % mod

print(ans)