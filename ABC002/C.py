x1, y1, x2, y2, x3, y3 = map(int,input().split())

x2 -= x1
y2 -= y1
x3 -= x1
y3 -= y1
x1 = 0
y1 = 0

print(abs((x1-x3)*(y2-y3) - (x2-x3)*(y1-y3))/2)