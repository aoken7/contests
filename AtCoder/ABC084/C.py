n = int(input())
c_take = [0 for _ in range(n-1)]
s_start = [0 for _ in range(n-1)]
f_cycle = [0 for _ in range(n-1)]
for i in range(n-1):
    x,y,z = map(int,input().split())
    c_take[i] = x
    s_start[i] = y
    f_cycle[i] = z


for i in range(n-1):
    ans = s_start[i] + c_take[i]
    for j in range(i+1,n-1):
        ans = max(ans, s_start[j])
        if ans % f_cycle[j] != 0:
            ans += f_cycle[j] - ans % f_cycle[j]
        ans += c_take[j]
    print(ans)
print(0)