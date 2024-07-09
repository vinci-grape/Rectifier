n = int(input())
a = list(map(int, input().split()))
s = input()

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