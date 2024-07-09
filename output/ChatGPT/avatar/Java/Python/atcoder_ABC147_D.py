import math

n = int(input())
A = list(map(int, input().split()))

div = int(math.pow(10, 9)) + 7
ans = 0

for i in range(60):
    a = 0
    count1 = 0
    for j in range(n):
        if (A[j] >> i & 1) == 1:
            count1 += 1
    a = a + count1 * (n - count1)
    for j in range(i):
        a = (a << 1) % div
    ans += a
    ans %= div

print(ans)