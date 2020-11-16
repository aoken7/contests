import numpy as np
import random

n = int(input())
s = input()

cnt = 0
for h in range(n):
    for i in range(n):
        j = i + 1 + h
        k = j + 1 + h
        if k >= n :
            break
        
        if s[i] != s[j] and s[i] != s[k] and s[j] != s[k]:
            cnt+=1

#print("R:" + str(s.count("R")) + " G:" + str(s.count("G")) + " B:" + str(s.count("B")))
print(s.count("R") * s.count("G") * s.count("B") - cnt)