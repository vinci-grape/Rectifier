import sys

X, t = map(int, sys.stdin.readline().split())

if X - t >= 0:
    print(X - t)
else:
    print(0)