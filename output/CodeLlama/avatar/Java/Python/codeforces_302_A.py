import sys

n, k = map(int, sys.stdin.readline().split())
arr = list(map(int, sys.stdin.readline().split()))

for _ in range(k):
    l, r = map(int, sys.stdin.readline().split())
    if (r - l + 1) % 2 == 1:
        print(0)
    else:
        if (r - l + 1) // 2 <= arr.count(1) and (r - l + 1) // 2 <= arr.count(0):
            print(1)
        else:
            print(0)