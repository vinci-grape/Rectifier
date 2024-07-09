import sys

w = int(raw_input().strip())
n = int(raw_input().strip())
values = range(w)
for i in range(w):
    values[i] = i + 1
for i in range(n):
    x=0
    ab = raw_input().strip().split(',')
    a = int(ab[0]) - 1
    b = int(ab[1]) - 1
    x=values[a]
    values[a]=values[b]
    values[b]=x
for i in range(w):
    print values[i]