import sys
s = sys.stdin.readline().strip()
t = sys.stdin.readline().strip()
ura = 0
opa = 0
tmap = {}
for i in range(len(t)):
    ch = t[i]
    if ch not in tmap:
        tmap[ch] = 1
    else:
        tmap[ch] += 1
length = len(s)
for i in range(length):
    ch = s[i]
    if ch in tmap:
        inum = tmap[ch]
        if inum == 1:
            tmap.pop(ch)
        else:
            tmap[ch] -= 1
        ura += 1
for i in range(length):
    ch = s[i]
    rch = ch.upper() if ch.islower() else ch.lower()
    if rch in tmap:
        inum = tmap[rch]
        if inum == 1:
            tmap.pop(rch)
        else:
            tmap[rch] -= 1
        opa += 1
print(ura, opa)