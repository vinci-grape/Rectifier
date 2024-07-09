import sys

a, b, c, d = map(int, sys.stdin.readline().split())
if c > b:
    print(0)
elif a > d:
    print(0)
elif a < c:
    print(min(b, d) - c)
else:
    print(max(a, d) - min(b, d))