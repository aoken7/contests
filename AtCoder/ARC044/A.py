import math

def check(x):
    for i in range(2,int(math.sqrt(x)+1)):
        if x % i == 0:
            return False
    
    return True


n = int(input())
d = n % 10
l = list(map(int,str(n)))

if n == 1:
    print("Not Prime")
elif check(n):
    print("Prime")
elif d % 2 != 0 and d % 5 != 0 and sum(l) % 3 != 0:
    print("Prime")
else:
    print("Not Prime")
