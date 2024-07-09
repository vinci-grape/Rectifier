import sys

n = int(sys.stdin.readline())

for i in range(n):
    a, b = map(int, sys.stdin.readline().split())
    print(sub(a, b))

def sub(a, b):
    min = a if a < b else b
    max = a if a > b else b
    result = 0
    while min > 0:
        result += max // min
        max = max % min
        min, max = min(min, max), max(min, max)
    return result