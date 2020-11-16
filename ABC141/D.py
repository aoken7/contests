import queue

n,m = map(int,input().split())
a = list(map(int,input().split()))

q = queue.PriorityQueue()

for i in a:
    q.put(i)

for i in range(m):
    top = q.get()
    q.put(top//2)

ans = 0
while not q.empty():
    ans += q.get()

print(ans)