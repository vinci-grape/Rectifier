import sys
a, b, c = map(int, sys.stdin.readline().split())
if a + b >= c:
    print("Yes")
else:
    print("No")