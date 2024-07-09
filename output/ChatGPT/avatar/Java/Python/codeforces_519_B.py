n = int(input())
a = 0
b = 0
c = 0

for i in range(n):
    a += int(input())

for i in range(n - 1):
    b += int(input())

for i in range(n - 2):
    c += int(input())

x = a - b
y = b - c

print(x)
print(y)