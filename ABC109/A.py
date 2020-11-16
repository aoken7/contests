a,b = map(int,input().split())

if a*b % 2 == 1 or a*b*3 % 2 == 1:
    print("Yes")
else:
    print("No")