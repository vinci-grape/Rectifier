import sys

h = int(sys.stdin.readline())
a = int(sys.stdin.readline())

print(h // a if h % a == 0 else h // a + 1)