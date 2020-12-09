#pdfmita
n = int(input())
s = [input() for i in range(n)]

ab = 0
c1 = 0
c2 = 0
c3 = 0

for i in s:
    if i[-1] == 'A' and i[0] == 'B':
        c1+=1
    
    if i[0] == 'B' and i[-1] != 'A':
        c2+=1
    
    if i[-1] == 'A' and i[0] != 'B':
        c3+=1
    
    for j in range(len(i)-1):
        if i[j] == 'A' and i[j+1] == 'B':
            ab+=1

if c1 == 0:
    ab += min(c2,c3)
else:
    if c2 + c3 > 0:
        ab += c1 + min(c2,c3)
    elif c2 + c3 == 0:
        ab += c1-1

    
print(ab)
