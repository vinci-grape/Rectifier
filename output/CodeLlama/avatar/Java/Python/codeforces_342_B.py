import sys

input = sys.stdin.readline().split()
m = int(input[1])
s = int(input[2])
f = int(input[3])
maxT = -1
map = {}
while m > 0:
    mth = sys.stdin.readline().split()
    k = int(mth[0])
    map[k] = []
    map[k].append(int(mth[1]))
    map[k].append(int(mth[2]))
    maxT = max(maxT, k)
    m -= 1
actions = ""
M = "R" if s < f else "L"
d = 1 if s < f else -1
cur = s
a = -1
b = -1
for t in range(1, maxT + 1):
    if map.get(t):
        a = map.get(t)[0]
        b = map.get(t)[1]
    if map.get(t) and (cur >= a and cur <= b or cur + d >= a and cur + d <= b):
        actions += "X"
    else:
        actions += M
    cur += d
    if cur == f:
        break
while cur != f:
    actions += M
    cur += d
print(actions)