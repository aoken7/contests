h,w = map(int,input().split())
n = int(input())
a = list(map(int,input().split()))

array = []

for i in range(n):
    for j in range(a[i]):
        array.append(i+1)


for i in range(h):
    for j in range(w):
        if i % 2 == 0:
            print(array[i*w + j], end=" ")
        else:
            print(array[ i*w + w - 1 - j], end=" ")
    print()

"""
一次元配列で連続的に入れて配列を蛇腹折すればいい
"""