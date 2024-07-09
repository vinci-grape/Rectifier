def getFail(b, m):
    j = 0
    f = [0] * (m+1)
    for i in range(2, m+1):
        while j > 0 and b[j+1] != b[i]:
            j = f[j]
        if b[j+1] == b[i]:
            j += 1
        f[i] = j

n = int(input())
s1 = input()
str = input()
cnt = 0
b = [''] * (2*n+1)
for i in range(n):
    cnt += 1
    b[cnt] = str[i]
for i in range(n):
    cnt += 1
    b[cnt] = s1[i]
getFail(b, cnt)
len = min(f[cnt], min(n, n))
print(2 * n - len)