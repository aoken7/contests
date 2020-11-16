s = list(input())

ans = [0 for _ in range(len(s))]

gu = 0
ki = 0
t = ['R','L']
for k in range(2):
    for i in range(len(s)):
        if i % 2 == 0:
            if s[i] == t[k]:
                gu+=1
            else:
                ans[i] += gu
                gu = 0
                ans[i-1] += ki
                ki = 0
        else:
            if s[i] == t[k]:
                ki+=1
            else:
                ans[i] += ki
                ki = 0
                ans[i-1] += gu
                gu = 0
    s.reverse()
    ans.reverse()

for i in ans:
    print(i,end=" ")
print("")