n, m = map(int,input().split())

disk = [i for i in range(n+1)]

top = 0

for i in range(m):
    d = int(input())
    for j in range(n+1):
        if d == disk[j]:
            disk[0], disk[j] = disk[j], disk[0]
            break


for i in range(1,n+1):
    print(disk[i])