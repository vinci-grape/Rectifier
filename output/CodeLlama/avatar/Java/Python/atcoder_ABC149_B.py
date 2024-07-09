import sys

A, B, K = map(int, sys.stdin.readline().split())
x, y = A, B
x = A - K
if x < 0:
    y = B + x
    x = 0
    if y < 0:
        y = 0
print(x, y)