import itertools

n = int(input())

k = [3,5,7]
ans1 = []

while len(k) < 10:
    ans1 = list(itertools.permutations(k))
    k.append(3)