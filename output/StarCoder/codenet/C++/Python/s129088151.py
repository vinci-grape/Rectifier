n = int(raw_input())
T = {}
for i in range(n):
    com, str = raw_input().split()
    if com[0] == 'i':
        T[str] = True
    else:
        if T[str]:
            print 'yes'
        else:
            print 'no'