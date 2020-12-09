n,k = map(int,input().split())
a = list(map(int,input().split()))

a.append(-1)
n+=1

ans = 0
sumn = 0
left = 0
right = 0
while True:
    if sumn >= k:
        while sumn >= k:
            ans += max(n - right - 1,0)
            sumn -= a[left]
            left+=1
            if sumn >= k:
                ans += 1
    else:
        if right == n:
            break
        while sumn < k and right < n:
            sumn += a[right]
            right+=1
        ans += 1

print(ans-1)