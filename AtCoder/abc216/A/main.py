xy = input().split('.')
x = xy[0]
y = int(xy[1])

if 0 <= y <= 2:
    print(x+'-')
elif 3 <= y <= 6:
    print(x)
elif 7 <= y <= 9:
    print(x+'+')