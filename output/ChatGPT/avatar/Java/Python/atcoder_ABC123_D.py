import sys

x = list(map(int, sys.stdin.readline().split()))
k = int(sys.stdin.readline())

a = []
for _ in range(3):
    a.append(sorted(list(map(int, sys.stdin.readline().split()))))

ans = []
for i in range(x[0]):
    for j in range(x[1]):
        for m in range(x[2]):
            if (i + 1) * (j + 1) * (m + 1) <= k:
                tmp = a[0][x[0] - i - 1] + a[1][x[1] - j - 1] + a[2][x[2] - m - 1]
                ans.append(tmp)

ans.sort(reverse=True)
for i in range(k):
    print(ans[i])