import sys

x, y, a, b = map(int, sys.stdin.readline().split())

count = 0

for i in range(a, x+1):
    for j in range(b, y+1):
        if i <= j:
            continue
        count += 1

print(count)

for i in range(a, x+1):
    for j in range(b, y+1):
        if i <= j:
            continue
        print(i, j)