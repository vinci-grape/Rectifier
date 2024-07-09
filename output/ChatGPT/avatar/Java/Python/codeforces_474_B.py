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

n = int(input())
arr = [0] * n
arr[0] = int(input())
for i in range(1, n):
    x = int(input())
    arr[i] = x + arr[i - 1]

m = int(input())
q = [0] * m
for i in range(m):
    q[i] = int(input())

for k in range(m):
    print(fun(arr, q[k], n, m) + 1)