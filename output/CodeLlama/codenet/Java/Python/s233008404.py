import sys

def pow(base, n):
    retVal = 1
    while n > 0:
        if (n & 1) == 1:
            retVal *= base
        n >>= 1
        base *= base
    return retVal

def judge(hPattern, wPattern):
    hBitArr = [0] * h
    wBitArr = [0] * w

    for i in range(h):
        if ((hPattern >> i) & 1) == 1:
            hBitArr[i] = 1

    for i in range(w):
        if ((wPattern >> i) & 1) == 1:
            wBitArr[i] = 1

    black = 0

    for i in range(h):
        for j in range(w):
            if hBitArr[i] == 1 or wBitArr[j] == 1:
                continue

            if colorMtr[i][j] == '#':
                black += 1

    if black == k:
        return True
    else:
        return False

h, w, k = map(int, sys.stdin.readline().split())

colorMtr = []
for i in range(h):
    colorMtr.append(list(sys.stdin.readline().strip()))

hPattern = pow(2, h)
wPattern = pow(2, w)

ans = 0

for i in range(hPattern):
    for j in range(wPattern):
        if judge(i, j):
            ans += 1

print(ans)