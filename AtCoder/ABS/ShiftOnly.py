import numpy

n = int(input())
a = list(map(int,input().split()))

def main():
    pass
    g = numpy.gcd.reduce(a)
    print(int(numpy.log2(g)))

main()