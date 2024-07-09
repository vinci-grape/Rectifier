import sys

n = int(sys.stdin.readline().strip())
s = sys.stdin.readline().strip()
rc = 0
gc = 0
bc = 0
for i in range(len(s)):
    if s[i] == 'R':
        rc += 1
    elif s[i] == 'G':
        gc += 1
    else:
        bc += 1
result = rc * gc * bc
for i in range(1, n + 1):
    for k in range(i + 1, n + 1):
        if (i + k) % 2 == 0:
            is = s[i - 1]
            ks = s[k - 1]
            js = s[int((i + k) / 2) - 1]
            if is != ks and ks != js and js != is:
                result -= 1
print(result)