import sys

n, k = map(int, sys.stdin.readline().split())
s = list(map(int, sys.stdin.readline().split()))
temp = 0
ans = 1000000000
if k == 1:
    for i in range(n):
        temp = s[i]
        ans = min(abs(temp), ans)
    print(ans)
elif n - k != 0:
    for i in range(n - k + 1):
        min = s[i]
        max = s[i + k - 1]
        if min < 0 and max > 0:
            temp = min(2 * (-min) + max, (-min) + 2 * max)
        else:
            temp = max(abs(min), abs(max))
        ans = min(ans, temp)
    print(ans)
else:
    min = s[0]
    max = s[n - 1]
    if min < 0 and max > 0:
        print(min(2 * (-min) + max, (-min) + 2 * max))
    else:
        print(max(abs(min), abs(max)))