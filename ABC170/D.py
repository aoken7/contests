import numpy as np
import itertools
import math


n = int(input())
a = list(map(int,input().split()))

a.sort()
for i in itertools.combinations(a,2):
    print(str(i) + ":" + str(np.gcd(i[0],i[1])))
print(a)
