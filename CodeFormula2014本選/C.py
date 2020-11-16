s = input().split()
d = dict()

d = dict()

for i in s:
    stack = []
    flag = 0
    for j in i:
        if j == '@':
            if flag == 1:
                if len(stack) > 0:
                    d["".join(stack)] = 0
                    stack.clear()
            else:
                flag = 1
        elif flag == 1:
            stack.append(j)
    if len(stack) > 0:
        d["".join(stack)] = 0
        stack.clear()

ans = []
for i in d:
    ans.append(i)
ans.sort()

for i in ans:
    print(i)