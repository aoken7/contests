k = int(input())

if k % 2 == 1:
    print(k // 2 * ((k+1) // 2))
else:
    print((k // 2) ** 2)