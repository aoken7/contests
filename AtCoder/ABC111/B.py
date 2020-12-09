n = input()

def f(x):
    if x == '1':
        return '9'
    else:
        return '1'

ans = ""
for i in n:
    ans += f(i)

print(ans)