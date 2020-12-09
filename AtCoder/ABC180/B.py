import numpy as np

n = int(input())
x = np.array(list(map(int,input().split())))

def main():
    pass
    print(np.sum(np.abs(x)))
    print(np.sqrt(np.sum(np.power(x,2))))
    print(np.max(np.abs(x)))

main()