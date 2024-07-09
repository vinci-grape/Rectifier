import sys

s, t = sys.stdin.readline().strip(), sys.stdin.readline().strip()
min = sys.maxsize
for i in range(len(s)-len(t)+1):
    calc = 0
    for x in range(len(t)):
        if s[i+x] != t[x]:
            calc += 1
    min = min(min, calc)
if min != sys.maxsize:
    print(min)
else:
    print(len(t))