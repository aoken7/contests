n,m,l = map(int,input().split())
p,q,r = map(int,input().split())

ans = []
ans.append(n//p * (m//q) * (l//r))
ans.append(n//p * (m//r) * (l//q))
ans.append(n//r * (m//q) * (l//p))
ans.append(n//r * (m//p) * (l//q))
ans.append(n//q * (m//p) * (l//r))
ans.append(n//q * (m//r) * (l//p))

print(max(ans))