import sys

for line in sys.stdin:
    a, b = map(int, line.split())
    c = a - b * 2
    if c < 0:
        c = 0
    print(c)