n,k = map(int,input().split())
s = []
for i in range(n):
    tmp = input()
    st = list()
    for j in tmp:
        st.append(j)
    s.append(set(st))

for i in range(len(s)-1):
    for j in range(i,len(s)):
        