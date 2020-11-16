n,l = map(int,input().split())
a = [input() for i in range(l+1)]

grid = [[-1 for i in range(n)] for i in range(l)]

col = 0
for i in range(len(a[-1])):
    if a[-1][i] == 'o':
        col = i

for i in range(l):

    #print(a[l-i-1][col-1] + " " + a[l-i-1][col] + " " + a[l-i-1][col+1])
    if col < len(a[0])-1 and a[l-i-1][col+1] == '-':
        col += 2
    elif col > 0 and a[l-i-1][col-1] == '-':
        col -= 2
print(int(col/2+1))