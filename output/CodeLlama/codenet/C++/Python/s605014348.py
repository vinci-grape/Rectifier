import math

def div(n):
    if n % 2 == 0:
        return 2
    s = math.sqrt(n)
    for i in range(3, int(s) + 1, 2):
        if n % i == 0:
            return i
    return n

num = int(input())
print(num, ":", end="")
while num != 1:
    print(" " + str(div(num)), end="")
    num = num // div(num)
print()