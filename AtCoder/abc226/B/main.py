n = int(input())

sets = set()

for i in range(n):
    a = list(map(int,input().split()))
    a = a[1:]
    sets.add(tuple(a))

print(len(sets))