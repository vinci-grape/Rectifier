import sys

a, b = map(int, sys.stdin.readline().split())
c = a - b * 2
if c < 0:
    c = 0
print(c)