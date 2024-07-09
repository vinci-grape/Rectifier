import sys

for i in range(int(sys.stdin.readline())):
    n = int(sys.stdin.readline())
    print(maxLeft(n))

def maxLeft(n):
    return n - 2 if n > 2 else 0