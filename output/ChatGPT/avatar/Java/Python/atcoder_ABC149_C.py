import math

x = int(input())

if x != 2 and x % 2 == 0:
    x += 1

while True:
    sqrtNum = math.sqrt(x)
    for i in range(3, int(sqrtNum) + 1, 2):
        if x % i == 0:
            break
    if i > sqrtNum:
        break
    x += 2

print(x)