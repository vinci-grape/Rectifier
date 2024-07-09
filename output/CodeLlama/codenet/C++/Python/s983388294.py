import sys

n = int(sys.stdin.readline())
a = [int(x) for x in sys.stdin.readline().split()]
curr = 0
for i in range(n):
    if a[i] == curr + 1:
        curr += 1
if curr > 0:
    print(n - curr)
else:
    print(-1)