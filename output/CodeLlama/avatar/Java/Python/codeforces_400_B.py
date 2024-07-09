import sys
n, m = map(int, sys.stdin.readline().split())
arrs = []
for i in range(n):
    arrs.append(sys.stdin.readline().rstrip())
length = []
index = 0
returnDex = 0
for tmp in arrs:
    dexG = tmp.index('G')
    dexS = tmp.index('S')
    if dexG > dexS:
        returnDex = -1
    length.append(dexS - dexG)
set = set()
for len in length:
    set.add(len)
if returnDex == -1:
    print(returnDex)
else:
    print(len(set))