#解説そのまま

import math
import numpy as np

a,b,x = map(int,input().split())
s = x/a
rad = 0
if s >= a*b/2:
    h = (a*b-s)*2/a
    rad = math.atan2(h,a)
else:
    w = s*2/b
    rad = math.atan2(b,w)

PI = math.acos(-1)
deg = rad/(2*PI)*360

print(deg) 