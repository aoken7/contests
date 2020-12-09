import datetime

y,m,d = map(int,input().split('/'))

t = datetime.date(y,m,d)

if t.year / t.month % t.day == 0:
    print(str(t).replace('-','/'))
    exit(0)


while True:
    if t.year / t.month % t.day == 0:
        print(str(t).replace('-','/'))
        exit(0)
    
    t += datetime.timedelta(days=1)