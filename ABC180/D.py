#pdf見て回答

import numpy as np

x,y,a,b = map(int,input().split())

def main():
    pass
    ans = 0
    global x

    '''
    if x * a <= x + b:
        i = x
        while i * a < y:
            i *= a 
            ans += 1
            
            if i * a >= b and i + b < y:
                ans += (y - 1 - i) / b
                break

            #print(i)
        
    else:
        ans = (y - 1 - x) / b
    '''

    while x*a <= x+b and a*x < y:
        x*=a
        ans+=1

    ans += (y-1-x) // b

    print(int(ans))

main()