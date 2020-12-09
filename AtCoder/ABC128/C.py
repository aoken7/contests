import numpy as np

n,m = map(int,input().split())
k = []
s = []
for i in range(m):
    tmp = list(map(int,input().split()))
    k.append(tmp[0])
    s.append(tmp[1:])
p = list(map(int,input().split()))

def dfs(x=0,l=[]):
    if x == n:
        flag = 1
        
        for i in range(len(s)):
        
            onSum = 0
            for j in s[i]:
                if l[j-1] == 1:
                    onSum += 1
            if onSum % 2 != p[i]:
                flag = 0
                break

        return flag
    
    return dfs(x+1,l+[0]) + dfs(x+1,l+[1])

print(dfs())