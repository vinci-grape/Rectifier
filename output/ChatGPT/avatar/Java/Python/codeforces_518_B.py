def reverse(ch):
    if ch.islower():
        return ch.upper()
    else:
        return ch.lower()
    
s = input()
t = input()
ura = 0
opa = 0
tmap = {}

for ch in t:
    if ch not in tmap:
        tmap[ch] = 1
    else:
        tmap[ch] += 1

length = len(s)
i = 0
while i < length:
    ch = s[i]
    num = tmap.get(ch)
    if num is None:
        i += 1
        continue
    inum = num
    if inum == 1:
        del tmap[ch]
    else:
        tmap[ch] = inum - 1
    s = s[:i] + 'Я' + s[i+1:]
    ura += 1
    i += 1

i = 0
while i < length:
    ch = s[i]
    rch = reverse(ch)
    num = tmap.get(rch)
    if num is None:
        i += 1
        continue
    inum = num
    if inum == 1:
        del tmap[rch]
    else:
        tmap[rch] = inum - 1
    opa += 1
    i += 1

print(ura, opa)