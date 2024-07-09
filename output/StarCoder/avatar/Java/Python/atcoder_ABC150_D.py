import math

n, m = map(int, input().split())
a = list(map(int, input().split()))

lcd = 1
for i in range(n):
    lcd *= a[i] // math.gcd(lcd, a[i])
    if lcd > m:
        print(0)
        exit()

for i in range(n):
    if (lcd // a[i]) % 2 == 0:
        print(0)
        exit()

print((m // lcd + 1) // 2)