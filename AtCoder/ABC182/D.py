n = int(input())
a =  list(map(int,input().split()))

plus_dp = [0 for _ in range(n)]
plus_dp[0] = a[0]
for i in range(n-1):
    plus_dp[i+1] = plus_dp[i] + a[i+1] 

plus_max_dp = [0 for _ in range(n)]
plus_max_dp[0] = plus_dp[0]
for i in range(n-1):
    plus_max_dp[i+1] = max(plus_max_dp[i],plus_dp[i+1])

ans = 0
point = 0
plus = 0
max_plus = 0
for i in range(len(a)):
    ans = max(ans, point+plus_max_dp[i], point)
    point = point + plus + a[i]
    plus = plus + a[i]
    max_plus = max(max_plus,plus)
    #print(plus_dp[0:i+1])
    #print(plus_max_dp[i])
    #print("point:"+str(point)+" plus:"+str(plus) + " a:" + str(a[i]))

#print(plus_dp)
#print(plus_max_dp)
print(ans)