s = input()

st = set()

for i in range(len(s)):
    st.add(s[i:i+len(s)])
    print(s[1:2])
print(st)