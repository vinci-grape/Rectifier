import sys
n = int(sys.stdin.readline())
c = list(sys.stdin.readline())
p = 97
for i in range(4):
    for j in range(i, n, 4):
        c[j] = chr(p)
        p += 1
for i in range(n):
    print(c[i], end='')