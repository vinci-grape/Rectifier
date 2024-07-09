import math

x = int(input())
if x!= 2 and x % 2 == 0:
    x += 1
while True:
    for i in range(3, int(math.sqrt(x)) + 1, 2):
        if x % i == 0:
            break
    else:
        break
    x += 2
print(x)