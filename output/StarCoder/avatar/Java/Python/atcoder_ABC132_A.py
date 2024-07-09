import sys

s = sys.stdin.readline().rstrip()

targ = list(s)

map = {}

for i in range(len(targ)):
    if targ[i] not in map:
        map[targ[i]] = 1
    else:
        map[targ[i]] += 1

ok = True

for c in map.values():
    if c!= 2:
        ok = False
        break

if ok and len(map) == 2:
    print("Yes")
else:
    print("No")