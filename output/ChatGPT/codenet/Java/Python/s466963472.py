# AOJ No. 0014 Integral

d = int(input())

ans = 0
for i in range(1, 600 // d):
    x = i * d
    y = x * x
    ans += y * d

print(ans)