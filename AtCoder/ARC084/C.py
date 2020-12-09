n = int(input())
a = list(map(int,input().split()))
b = list(map(int,input().split()))
c = list(map(int,input().split()))

a.sort()
b.sort()
c.sort()

def naive():
    ans = 0
    for i in c:
        for j in b:
            for k in a:
                if k < j and j < i:
                    ans+=1
    
    return ans


def solve():
    print("solve")

print(naive())