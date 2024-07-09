import sys

a, b = map(int, sys.stdin.readline().split())

sum = 0

for i in range(2):

    if a >= b:

        sum += a

        a -= 1

    else:

        sum += b

        b -= 1

print(sum)