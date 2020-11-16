h, n = map(int,input().split())
a = []
b = []
for i in range(n):
    x,y = map(int,input().split())
    a.append(x)
    b.append(y)

ans = []

def dfs(hp, array):
    if hp <= 0:
        ans.append(array)
        return array
    
    for i in range(len(a)):
        dfs(hp-a[i], array + [b[i]])

    return array


dfs(h,[])

minn = 1e9

for i in ans:
    print(i)
    minn = min(minn, sum(i))

print(minn)