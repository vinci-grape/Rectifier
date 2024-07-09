import sys

n = int(raw_input().strip())
arr = map(int, raw_input().strip().split(' '))

max = 0
min = 10000
for i in arr:
    if max < i:
        max = i
    if min > i:
        min = i

print max - min