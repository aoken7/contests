n, m ,t = map(int,input().split())
pre = 0
b = n
for i in range(m):
    x,y = map(int,input().split())
    b -= x - pre
    if b <= 0:
        print("No")
        exit(0)
    b = min(b + y - x, n)
    pre = y

b -= t - pre
if b <= 0:
    print("No")
    exit(0)

print("Yes")
