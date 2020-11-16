#pdf見て回答

n,s = input().split()
n = int(n)

def main():
    pass

    ans = 0

    for i in range(n):
        c1 = 0
        c2 = 0
        for j in range(i,n):
            if s[j] == 'A':
                c1+=1
            elif s[j] == 'T':
                c1-=1
            elif s[j] == 'C':
                c2+=1
            else:
                c2-=1
        
            if c1 == 0 and c2 == 0 :
                ans+=1
            
            if abs(c1) > n-j or abs(c2) > n-j:
                break
    
    print(ans)

main()