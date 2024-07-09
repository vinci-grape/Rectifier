import sys

def sum(a):
    ans = 0
    while a >= 10:
        ans += a % 10
        a //= 10
    ans += a
    return ans


n = int(sys.stdin.readline().rstrip())
ans = sum(1) + sum(n - 1)
for A in range(1, n + 1):
    if sum(A) + sum(n - A) < ans:
        ans = sum(A) + sum(n - A)
print(ans)