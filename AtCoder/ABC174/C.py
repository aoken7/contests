import numpy as np

#解説放送見て回答

k = int(input())

s = 7 % k
ans = 1
st = set([])
for i in range(k):
    #print(s % k)
    if s % k == 0:
        print(ans)
        exit(0)
    if s % k in st:
        print(-1)
        exit(0)
    
    st.add(s % k)
    s = (s * 10 + 7) % k
    
    ans += 1


