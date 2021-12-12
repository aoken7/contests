import math

a,b = map(int,input().split())

ans = int(a*b // math.gcd(a, b))

if(ans > 1000000000000000000):
    print("Large")
else:
    print(ans)