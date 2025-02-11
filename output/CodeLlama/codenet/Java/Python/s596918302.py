import sys
n = int(sys.stdin.readline())
arr = []
for i in range(n):
    arr.append([int(x) for x in sys.stdin.readline().split()])

def min(arr, n):
    if n == 1:
        return 0
    if n == 2:
        return abs(arr[n-1] - arr[n-2])
    op1 = abs(arr[n-1] - arr[n-2]) + min(arr, n-1)
    op2 = abs(arr[n-1] - arr[n-3]) + min(arr, n-2)
    return min(op1, op2)

def dpc(arr, i, n, row):
    if row == n:
        return 0
    j = 0
    k = 2
    if i == 1:
        j = 0
        k = 2
    elif i == 0:
        j = 1
        k = 2
    else:
        j = 0
        k = 1
    return arr[row][i] + max(dpc(arr, j, n, row + 1), dpc(arr, k, n, row + 1))

def dpx(arr, n):
    dp = [[0 for i in range(3)] for j in range(n)]
    dp[0][0] = arr[0][0]
    dp[0][1] = arr[0][1]
    dp[0][2] = arr[0][2]
    for i in range(1, n):
        for in_ in range(3):
            j = 0
            k = 2
            if in_ == 1:
                j = 0
                k = 2
            elif in_ == 0:
                j = 1
                k = 2
            else:
                j = 0
                k = 1
            dp[i][in_] = max(dp[i-1][k], dp[i-1][j]) + arr[i][in_]
    return max(dp[n-1][0], max(dp[n-1][1], dp[n-1][2]))

# ans = max(dpc(arr, 0, n, 0), max(dpc(arr,1,n,0), dpc(arr,2,n, 0)))
ans = dpx(arr, n)
print(ans)