import queue

n = int(input())

pq = queue.PriorityQueue()

for i in range(n):
    a,b = map(int,input().split())
    pq.put((a,b))

color = [0 for i in range(int(1e6+1))]

q = queue.PriorityQueue()

for i in range(int(1e6+1)):
    while not pq.empty():
        top = pq.get()
        if top[0] <= i:
            q.put(top)
        else:
            pq.put(top)
            break
    
    while not q.empty():
        front = q.get()
        if front[1] >= i:
            q.put(front)
            break
    
    color[i] = q.qsize()

print(max(color))