import math

source = input()

if len(source) > 10 or len(source) < 1:
  exit()

max_i = int(math.pow(2, len(source) - 1))

sum = 0

for i in range(max_i):
  plus = bin(i)[2:]

  number = 0

  working = source
  while any(plus):
    i = 0
    while not plus[i]:
      i += 1
    sum += float(working[:i + 1])
    plus = plus[i + 1:]
    working = working[i + 1:]
  sum += float(working)

print("{:.0f}".format(sum))