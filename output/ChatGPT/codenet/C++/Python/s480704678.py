# Python code translation of the given C++ code

n = int(input())
a = list(map(int, input().split()))
acc = [0] * (n + 1)
for i in range(n):
    acc[i + 1] = acc[i] + a[i]
    acc[i + 1] %= 1000000007

ans = 0
for i in range(n):
    ans += a[i] % 1000000007 * (1000000007 + acc[n] - acc[i + 1]) % 1000000007
    ans %= 1000000007
print(ans)