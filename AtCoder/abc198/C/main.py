import math

r,x,y = map(int,input().split())

l = math.sqrt(x*x + y*y)
ans = math.ceil(l / r)

print(ans)