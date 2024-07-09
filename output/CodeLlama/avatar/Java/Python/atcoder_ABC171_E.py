import sys

n = int(sys.stdin.readline().rstrip())
a = list(map(int, sys.stdin.readline().split()))
r = 0
for i in range(n):
    r ^= a[i]
for i in range(n):
    if i != 0:
        print(' ', end='')
    print(r ^ a[i], end='')