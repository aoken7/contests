import queue

n, m = map(int,input().split())
a = [0 for i in range(m)]
b = [0 for i in range(m)]
for i in range(m):
    a[i],b[i] = map(int,input().split())

graph = [[] for i in range(n+1)]

for i in range(m):
    graph[a[i]].append(b[i])
    graph[b[i]].append(a[i])

#flag = set([])

def dfs(node, pre, flag):
    #print("(" + str(node) + "," + str(pre) + ")",end=" ")
    print(node,end=" ")
    print(flag)
    
    if node in flag:

        if pre != node:
            return 1
        return 0
    
    ret = 0
    flag.add(node)

    for i in graph[node]:
        ret += dfs(i,node,flag)
    
    return ret
st = set([])
ans = dfs(1,-1,st)

print(ans)
    