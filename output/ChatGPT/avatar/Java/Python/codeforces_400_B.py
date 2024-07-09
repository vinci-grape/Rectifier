n, m = map(int, input().split())
arrs = []
for _ in range(n):
    arrs.append(input())

length = []
returnDex = 0
for tmp in arrs:
    dexG = tmp.index("G")
    dexS = tmp.index("S")
    if dexG > dexS:
        returnDex = -1
    length.append(dexS - dexG)

length_set = set(length)
if returnDex == -1:
    print(returnDex)
else:
    print(len(length_set))