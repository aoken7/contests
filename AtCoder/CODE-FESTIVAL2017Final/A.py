s = input()

t = []

for i in range(2):
    for j in range(2):
        for k in range(2):
            for l in range(2):
                a = [i,j,k,l]
                u = ""
                if a[0]:
                    u += "AKI"
                else:
                    u += "KI"
                if a[1]:
                    u += "HA"
                else:
                    u += "H"
                if a[2]:
                    u += "BA"
                else:
                    u += "B"
                if a[3]:
                    u += "RA"
                else:
                    u+= "R"

                t.append(u)

for i in t:
    if i in s and len(s) == len(i):
        print("YES")
        exit(0)

print("NO")