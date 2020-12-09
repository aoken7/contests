n, k, s = map(int,input().split())

for i in range(k):
    print(s,end=" ")

if s < int(1e9):
    for i in range(n-k):
        print(s+1, end=" ")
else:
    for i in range(n-k):
        print(1, end=" ")