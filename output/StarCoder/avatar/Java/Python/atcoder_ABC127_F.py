import sys
input = sys.stdin.readline

n = int(input())

pqmax = []
pqmin = []
sumMin = 0
sumMax = 0
sumb = 0
min = 0

for _ in range(n):
    s = input().split()
    if s[0] == '2':
        ans = min
        ans *= len(pqmin)
        ans -= sumMin
        ans1 = min
        ans1 *= len(pqmax)
        ans1 = sumMax - ans1
        print(min, ans + ans1 + sumb)
    else:
        in_ = int(s[1])
        sumb += int(s[2])
        if in_ > min:
            pqmax.append(in_)
            sumMax += in_
        else:
            pqmin.append(in_)
            sumMin += in_
        if len(pqmin) > len(pqmax):
            sumMax += pqmin[0]
            sumMin -= pqmin[0]
            pqmax.append(pqmin.pop(0))
        if len(pqmin) < len(pqmax):
            sumMax -= pqmax[0]
            sumMin += pqmax[0]
            pqmin.append(pqmax.pop(0))
        min = pqmin[0]