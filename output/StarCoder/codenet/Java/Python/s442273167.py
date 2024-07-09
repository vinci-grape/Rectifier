import sys

n = int(raw_input().strip())
l = map(int, raw_input().strip().split(' '))
r = map(int, raw_input().strip().split(' '))

sum = 0
for i in range(n):
    sum += r[i] - l[i] + 1

print sum