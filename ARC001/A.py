a,b = map(int,input().split())

if a > b:
    a,b = b,a

ans = 0

while a < b:
    if b - a == 9:
        a+=9
        ans += 2
    elif b - a == 8:
        a+=8
        ans+=3
    elif b - a == 4:
        a+=4
        ans+=2
    elif b - a > 9:
        a+=10
        ans+=1
    elif b - a > 4:
        a+=5
        ans+=1
    else:
        a+=1
        ans+=1

print(ans)