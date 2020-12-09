x,y,z = map(int,input().split())

ans = 0

for a in range(x,100):
    for b in range(y,100):
        for c in range(z,100):
            ans += (100-a)*a/((a+b+c)) + (100-b)*b/((a+b+c)) + (100-c)*c/((a+b+c))

print(ans)