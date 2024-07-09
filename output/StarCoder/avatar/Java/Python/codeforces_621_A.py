import sys

n = int(raw_input())

list = []

for i in range(n):
    list.append(long(raw_input()))

odd = []

sum = 0

for i in list:
    if i % 2 == 0:
        sum += i
    else:
        odd.append(i)

odd.sort()

for i in odd:
    sum += i

if len(odd) % 2!= 0:
    sum -= odd[0]

print sum