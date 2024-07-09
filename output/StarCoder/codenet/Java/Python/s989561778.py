import sys

for line in sys.stdin:
    a, b = map(int, line.split())
    print(len(str(a + b)))