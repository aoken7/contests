import random
n = 10000
print(n)

r1 = random.sample(range(1,n),k=n-1)
r2 = random.sample(range(1,n), k=n-1)

for i in range(n-1):
    print(r1[i],r2[i])