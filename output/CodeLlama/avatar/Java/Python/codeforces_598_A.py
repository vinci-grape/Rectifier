import math
import sys

n = int(sys.stdin.readline())
s = 0
x = int(math.log(n, 2))
x += 1
s = -1 * (int(math.pow(2, x))) + 2 + (n * (n + 1)) / 2 - (int(math.pow(2, x)))
print(s)