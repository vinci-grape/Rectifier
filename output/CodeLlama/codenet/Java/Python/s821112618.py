import sys

s = ".,!? :abc:def:ghi:jkl:mno:pqrs:tuv:wxyz"
k = [list(i) for i in s.split(":")]
n = int(sys.stdin.readline())
while n:
    c = sys.stdin.readline().strip()
    l = -1
    a = 0
    for i in c:
        if i != '0':
            a = ord(i) - ord('1')
            l = (l + 1) % len(k[a])
        elif l >= 0:
            print(k[a][l], end='')
            l = -1
    print()
    n -= 1