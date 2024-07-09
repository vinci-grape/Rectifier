import sys

n = int(sys.stdin.readline())
a = 0
b = 0
c = 0
for i in range(n):
    a += int(sys.stdin.readline())
for i in range(n - 1):
    b += int(sys.stdin.readline())
for i in range(n - 2):
    c += int(sys.stdin.readline())
x = a - b
y = b - c
print(x)
print(y)