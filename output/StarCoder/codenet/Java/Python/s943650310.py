import sys

X = int(sys.stdin.readline())
t = int(sys.stdin.readline())

if X - t >= 0:
    print(X - t)
else:
    print(0)