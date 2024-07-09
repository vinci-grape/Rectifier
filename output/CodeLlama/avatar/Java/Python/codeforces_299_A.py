import sys

n = int(sys.stdin.readline())
a = list(map(int, sys.stdin.readline().split()))
a.sort()
min = a[0]
for value in a:
    if value % min != 0:
        print(-1)
        exit()
print(min)