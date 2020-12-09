s = input()
st = set([i for i in s])

ans = int(1e9)

for i in st:
    tmp = [-1]
    for j in range(len(s)):
        if i == s[j]:
            tmp.append(j)
    tmp.append(len(s))
    maxdiff = -1
    for j in range(len(tmp)-1):
        maxdiff = max(maxdiff, tmp[j+1]-tmp[j]-1)

    ans = min(ans, maxdiff)

print(ans)