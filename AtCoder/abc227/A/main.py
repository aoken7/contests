n, k, a = map(int,input().split())

memo = [i for i in range(1,n+1)]
memo *= 2

k %= n

#print(memo)

print(memo[a+k-2])