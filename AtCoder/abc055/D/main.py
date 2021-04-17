#!/usr/bin/env python3

#pdfmita
#仮定してやるのはなんとなくわかったけど4つ決めないと行けないのに気がつけなかった

import numpy as np

n = int(input())
s = input()


def set_hypo(a, b):
    hypo = [True for i in range(n)]
    hypo[0] = a
    hypo[-1] = b
    for i in range(n):
        if s[i] == 'o' and hypo[i] == True:
            hypo[(i+1) % n] = hypo[i-1]
        elif s[i] == 'o' and hypo[i] == False:
            hypo[(i+1) % n] = not hypo[i-1]
        elif s[i] == 'x' and hypo[i] == True:
            hypo[(i+1) % n] = not hypo[i-1]
        elif s[i] == 'x' and hypo[i] == False:
            hypo[(i+1) % n] = hypo[i-1]

    return hypo


def check(l):
    for i in range(n):
        if s[i] == 'o' and l[i] == True:
            if l[i-1] != l[(i+1)%n]:
                return False
        elif s[i] == 'o' and l[i] == False:
            if l[i-1] == l[(i+1)%n]:
                return False
        elif s[i] == 'x' and l[i] == True:
            if l[i-1] == l[(i+1)%n]:
                return False
        elif s[i] == 'x' and l[i] == False:
            if l[i-1] != l[(i+1)%n]:
                return False
    
    return True
    
def prin(l):
    for i in l:
        if i:
            print("S",end="")
        else:
            print("W",end="")
    print("")        

ans = []
ans.append(set_hypo(True,True))
ans.append(set_hypo(True,False))
ans.append(set_hypo(False,True))
ans.append(set_hypo(False,False))

for i in ans:
    if check(i):
        prin(i)
        exit(0)

print(-1)