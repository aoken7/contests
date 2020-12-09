#pdf見て回答

r1, c1 = map(int,input().split())
r2, c2 = map(int,input().split())

x2 = abs(r2 - r1)
y2 = abs(c2 - c1)

a = r1
b = c1
c = r2
d = c2

if c2 == c1 and r1 == r2:
    print(0)
elif r1 + c1 == r2 + c2 or r1-c1 == r2-c2 or abs(r1-r2) + abs(c1-c2) <= 3:
    print(1)
elif (a+b+c+d)%2==0 or (abs(a-c)+abs(b-d)<=6) or abs((a+b)-(c+d))<=3 or abs((a-b)-(c-d))<=3: 
    print(2)
else:
    print(3)