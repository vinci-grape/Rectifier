def nPr(n, r):
    res = 1
    for i in range(r):
        res *= (n - i)
    return res

def nCr(n, r):
    res = nPr(n, r) / nPr(r, r)
    for i in range(r):
        res *= (n - i)
        res /= (i + 1)
    return res

n, p = map(int, raw_input().split())
a = map(int, raw_input().split())
b = 0
c = 0
for i in range(n):
    if a[i] % 2 == 0:
        b += 1
    else:
        c += 1

if p == 0:
    for i in range(c):
        if i % 2 == 0:
            csum += nCr(c, i)
    ans = b * csum
else:
    for i in range(c):
        if i % 2 == 1:
            csum += nCr(c, i)
    ans = b * csum
print ans