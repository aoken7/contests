import queue

n = int(input())
a = list(map(int,input().split()))

q = queue.PriorityQueue()

for i in a:
    q.put(i)

