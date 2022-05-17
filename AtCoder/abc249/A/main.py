from re import T


a,b,c,d,e,f,x = map(int,input().split())

taka = [b] * a + [0] * c
aoki = [e] * d + [0] * f

taka *= 100
aoki *= 100

taka_i = 0
aoki_i = 0

for i in range(x):
    taka_i += taka[i]
    aoki_i += aoki[i]

if taka_i == aoki_i:
    print('Draw')
elif taka_i > aoki_i:
    print('Takahashi')
elif taka_i < aoki_i:
    print('Aoki')