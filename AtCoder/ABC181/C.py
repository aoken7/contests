#pdf観て回答

n = int(input())
x = []
y = []

for i in range(n):
    a,b = map(int,input().split())
    x.append(a)
    y.append(b)

for i in range(n-2):
    for j in range(i+1,n-1):
        for k in range(j+1,n):
            x1 = x[i] - x[k]
            x2 = x[j] - x[k]
            y1 = y[i] - y[k]
            y2 = y[j] - y[k]
            if x1 * y2 == x2 * y1:
                print("Yes")
                exit(0)

print("No")