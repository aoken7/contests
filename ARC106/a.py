n = int(input())

i = 1
mp = dict()
while(i < 50):
    j = 1
    while(j < 50):
        mp[pow(3,i) + pow(5,j)] = [i,j]
        #print(pow(3,i) + pow(5,j))
        #if int(pow(3,i)) + int(pow(5,j)) == n:
        #    print(str(i) + " " + str(j))
        #    exit(0)
        j+=1
    i+=1

if n in mp:
    ans = mp[n]
    print(str(mp[n][0]) + " " + str(mp[n][1]))
else:
    print(-1)