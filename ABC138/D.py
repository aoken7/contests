#他人の解答見て解答
import queue

n,q = map(int,input().split())
a=[]
b=[]
for i in range(n-1):
    c,d = map(int,input().split())
    a.append(c)
    b.append(d)

ans = [0 for i in range(n)]

for i in range(q):
    c,d = map(int,input().split())
    ans[c-1] += d

graph = [[] for _ in range(n)]
for i in range(n-1):
    graph[a[i]-1].append(b[i]-1)
    graph[b[i]-1].append(a[i]-1)


que = queue.Queue()
que.put(0)
flag = [1 for i in range(n)]
while not que.empty():
    top = que.get()
    flag[top] = 0
    for i in graph[top]:
        if flag[i]:
            que.put(i)
            ans[i] += ans[top]



print(*ans)