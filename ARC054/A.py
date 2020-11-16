l, x, y, s1, d1 = map(int,input().split())
s2 = s1 + l
d2 = d1 + l

ans = []
if (d1-s1)/(x+y) >= 0:
    ans.append((d1-s1)/(x+y))
if (d2-s1)/(x+y) >= 0:
    ans.append((d2-s1)/(x+y))
if x-y != 0 and (d1-s2)/(x-y) > 0:
    ans.append((d1-s2)/(x-y))
if x-y != 0 and (d1-s1)/(x-y) > 0:
    ans.append((d1-s1)/(x-y))

print(min(ans))