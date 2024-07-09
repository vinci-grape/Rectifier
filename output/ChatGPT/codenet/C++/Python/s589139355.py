a = int(input())
t = 0
h = 0

for i in range(a):
    taro, hana = input().split()
    lt = len(taro)
    lh = len(hana)
    
    if lt > lh:
        l = lt
    else:
        l = lh
    
    tt = 0
    hh = 0
    
    if taro > hana:
        t += 3
    elif hana > taro:
        h += 3
    elif hana == taro:
        h += 1
        t += 1

print(t, h)