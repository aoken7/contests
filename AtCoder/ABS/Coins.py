a = int(input())
b = int(input())
c = int(input())
x = int(input())

def main():
    pass

    ans = 0

    for i in range(a):
        for j in range(b):
            for k in range(c):
                if 500 * i + 100 * j + 50 * k == x:
                    ans += 1
                print(500 * i + 100 * j + 50 * k )
    
    print(ans)

main()