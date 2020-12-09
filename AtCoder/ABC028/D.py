#pdfmita 
n,k = map(int,input().split())

ans = ((n-k) * (k-1) * 6 + (n-1) * 3 + 1) / (n**3)

print(ans)