import sys

for line in sys.stdin:
    a, b = map(int, line.split())
    digit = len(str(a + b))
    print(digit)