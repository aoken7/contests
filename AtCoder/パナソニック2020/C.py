#pdf見て解答

import math
a,b,c = map(int,input().split())

d = c-a-b 

if 4*a*b < d ** 2 and d > 0:
    print("Yes")
else:
    print("No")

