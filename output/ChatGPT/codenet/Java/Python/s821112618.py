n = int(input())
s = ".,!? :abc:def:ghi:jkl:mno:pqrs:tuv:wxyz".split(":")
k = []
for i in range(9):
    k.append(list(s[i]))

while n > 0:
    c = list(input())
    l = -1
    a = 0
    for i in range(len(c)):
        if c[i] != '0':
            a = int(c[i]) - 1
            l = (l + 1) % len(k[a])
        elif l >= 0:
            print(k[a][l], end="")
            l = -1
    print()
    n -= 1