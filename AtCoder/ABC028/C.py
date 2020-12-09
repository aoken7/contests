import itertools

a = list(map(int,input().split()))

ans = []

for i in itertools.combinations(a,3):
    ans.append(sum(i))

ans.sort()

print(ans[-3])