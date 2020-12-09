import numpy as np

x1,y1,r = map(int,input().split())
x2, y2, x3, y3 = map(int,input().split())

square = np.array([[x2,y2],[x2,y3],[x3,y2],[x3,y3]])
circle = np.array([x1,y1])
max_distance = 0 
for i in (square - circle):
    max_distance = max(max_distance, np.sqrt(np.sum(np.power(i,2))))



if x1-r >= x2 and x1+r <= x3 and y1-r >= y2 and y1+r <= y3:
    print("NO")
    print("YES")
elif max_distance <= r:
    print("YES")
    print("NO")
else:
    print("YES")
    print("YES")

'''
A-塗り絵
場合分けを丁寧にするだけ
'''