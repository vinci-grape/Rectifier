import math

q = int(input())

while q > 0:
    n = int(input())
    x = int(math.log(n, 2))
    x += 1
    s = -1 * (2 ** x) + 2 + ((n * (n + 1)) / 2) - (2 ** x)
    print(s)
    q -= 1