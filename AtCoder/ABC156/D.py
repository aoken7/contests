n,a,b = map(int,input().split())



def pow_kai(a, n):
    x = 1
    while n > 0:
        if n & 1:
            x = x * a
        n >>= 1
    a =
    return x

print(pow_kai(2,10))