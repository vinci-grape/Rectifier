import sys
n = int(sys.stdin.readline())
a = list(map(int, sys.stdin.readline().split()))
s = sys.stdin.readline()
sum = 0
for i in range(len(s)):
    if s[i] == 'B':
        sum += a[i]
ans = sum
sum1 = sum
for i in range(len(s)):
    if s[i] == 'A':
        sum1 += a[i]
    else:
        sum1 -= a[i]
    ans = max(ans, sum1)
sum1 = sum
for i in range(len(s)-1, -1, -1):
    if s[i] == 'A':
        sum1 += a[i]
    else:
        sum1 -= a[i]
    ans = max(ans, sum1)
print(ans)