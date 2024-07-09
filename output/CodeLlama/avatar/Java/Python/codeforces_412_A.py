import sys

n, k = map(int, sys.stdin.readline().strip().split())
a = sys.stdin.readline().strip()
if k > n // 2:
    while k < n:
        print("RIGHT")
        k += 1
else:
    while k > 1:
        print("LEFT")
        k -= 1
if k == 1:
    for i in range(len(a)):
        print("PRINT", a[i])
        if i + 1 < len(a):
            print("RIGHT")
else:
    for i in range(len(a) - 1, -1, -1):
        print("PRINT", a[i])
        if i - 1 >= 0:
            print("LEFT")