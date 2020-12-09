n = int(input())
b = [0 for i in range(n-1)]
for i in range(n-1):
    b[i] = int(input())

def dfs(graph, root):
    if len(graph[root]) == 0:
        return 1
    
    tmp = []
    for i in graph[root]:
        tmp.append(dfs(graph, i))
    
    maxn = max(tmp)
    minn = min(tmp)

    return maxn + minn + 1

def main():
    graph = [[] for i in range(n)]
    for i in range(len(b)):
        graph[b[i]-1].append(i+1)
    
    print(dfs(graph, 0))
    pass

main()