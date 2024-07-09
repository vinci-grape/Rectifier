import math
import sys

source = sys.stdin.readline()

if len(source) > 10 or len(source) < 1:
    sys.exit(-1)

max_i = int(math.pow(2, len(source) - 1))

sum = 0

for i in range(max_i):
    plus = bin(i)[2:]
    plus = plus.zfill(len(source))

    number = 0

    working = source
    while len(plus) > 0:
        i = 0
        while plus[i] == '0':
            i += 1
        sum += float(working[0:i + 1])
        plus = plus[i + 1:]
        working = working[i + 1:]
    sum += float(working)

print('%.0f' % sum)