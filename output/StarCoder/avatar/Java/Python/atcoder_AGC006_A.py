import sys
input = sys.stdin.readline

N = 200 + 10
f = [0] * N
b = [0] * N

def getFail(b, m):
    j = 0
    f[0] = f[1] = 0
    for i in range(2, m + 1):
        while j > 0 and b[j + 1]!= b[i]:
            j = f[j]
        if b[j + 1] == b[i]:
            j += 1
        f[i] = j

n = int(input())
s1 = input().rstrip()
str = input().rstrip()

cnt = 0
for i in range(n):
    b[cnt + 1] = str[i]
    cnt += 1
for i in range(n):
    b[cnt + 1] = s1[i]
    cnt += 1

getFail(b, cnt)

len = min(f[cnt], min(n, n))
print(2 * n - len)