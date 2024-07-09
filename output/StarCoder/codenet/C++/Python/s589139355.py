import sys

a = int(raw_input().strip())
for i in xrange(a):
    taro, hana = raw_input().strip().split(' ')
    lt = len(taro)
    lh = len(hana)
    if lt > lh:
        l = lt
    else:
        l = lh
    tt = 0
    hh = 0
    if taro > hana:
        t = t + 3
    elif hana > taro:
        h = h + 3
    elif hana == taro:
        h = h + 1
        t = t + 1
print t, h