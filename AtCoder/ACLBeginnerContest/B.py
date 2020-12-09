a,b,c,d = map(int,input().split())

if c < a and d < a or c > b and d > b:
    print("No")
else:
    print("Yes")