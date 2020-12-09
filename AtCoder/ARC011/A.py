#人の回答見た
m,n,N = map(int,input().split())

ans = N
noUse = 0

while N >= m:
    ans += (N - N % m) // m * n

    N = (N - N % m) // m * n + N % m
print(ans)