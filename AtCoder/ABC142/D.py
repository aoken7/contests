#pdf観て回答

import math
import collections

def prime_factorize(n):
    a = []
    while n % 2 == 0:
        a.append(2)
        n //= 2
    f = 3
    while f * f <= n:
        if n % f == 0:
            a.append(f)
            n //= f
        else:
            f += 2
    if n != 1:
        a.append(n)
    return a

a,b = map(int,input().split())

c1 = (prime_factorize(a))
c2 = (prime_factorize(b))

ans = 0

#s = set([i for i in s1.items()]) & set([i for i in s2.items()])


s1 = set([])
s2 = set([])

for i in c1:
    s1.add((i,))
for i in c2:
    s2.add((i,))

print(len(s1 & s2) + 1)
