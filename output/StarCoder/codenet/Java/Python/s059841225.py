import sys
while True:
    try:
        str = raw_input()
        strArr = str.split(",")
        l = [int(x) for x in strArr]
        d = sum(l)
        v = [int(x) for x in strArr[10:12]]
        t = float(d)/(v[0] + v[1])
        d = 0
        for i in range(11):
            if v[0]*t <= d:
                print i
                break
            else:
                d += l[i]
    except EOFError:
        break