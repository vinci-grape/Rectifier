s = int(input())
a = set()
a.add(s)
d = 2

while True:
    if s % 2 == 0:
        x = s // 2
        if x in a:
            print(d)
            break
        a.add(x)
    else:
        x = 3 * s + 1
        if x in a:
            print(d)
            break
        a.add(x)
    s = x
    d += 1

print(d)