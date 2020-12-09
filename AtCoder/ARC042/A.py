import queue

n, m = map(int,input().split())

flag = [-1 for i in range(n)]

q = queue.PriorityQueue()

for i in range(n):
    flag[int(input())-1] = i+1


print(flag)
