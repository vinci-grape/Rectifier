def main ():
    scan = input()
    s = scan.next()
    t = scan.next()
    ura = 0
    opa = 0
    tmap = {}
    for i in range(len(t)):
        ch = t[i]
        if not tmap.has_key(ch):
            tmap[ch] = 1
        else:
            tmap[ch] += 1
    length = len(s)
    for i in range(length):
        ch = s[i]
        num = tmap.get(ch)
        if num == None:
            continue
        inum = num
        if inum == 1:
            tmap.pop(ch)
        else:
            tmap[ch] -= 1
        s[i] = 'Я'
        ura += 1
    for i in range(length):
        ch = s[i]
        num = tmap.get(ch)
        if num == None:
            continue
        inum = num
        if inum == 1:
            tmap.pop(ch)
        else:
            tmap[ch] -= 1
        opa += 1
    print(ura,opa)