n = int(input())
k = int(input())
x = n // k
y = n % k

if y != 0:
    z = x + 1 - x
else:
    z = x - x

print(z)