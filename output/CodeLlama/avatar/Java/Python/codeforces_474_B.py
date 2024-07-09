import sys
n = int(sys.stdin.readline())
arr = [0] * n
arr[0] = int(sys.stdin.readline())
for i in range(1, n):
    arr[i] = int(sys.stdin.readline()) + arr[i - 1]
m = int(sys.stdin.readline())
q = [0] * m
for i in range(m):
    q[i] = int(sys.stdin.readline())
for k in range(m):
    print(fun(arr, q[k], n, m) + 1)


def fun(arr, q, n, m):
    res = 0
    i = 0
    j = n
    while i <= j:
        md = i + (j - i) // 2
        if arr[md] == q:
            return md
        elif arr[md] > q:
            res = md
            j = md - 1
        else:
            i = md + 1
    return res