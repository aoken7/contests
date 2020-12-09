n = int(input())
r = input()

s = 0
for i in r:
    if i == 'A':
        s += 4
    elif i == 'B':
        s += 3
    elif i == 'C':
        s += 2
    elif i == 'D':
        s += 1

print(s/n)