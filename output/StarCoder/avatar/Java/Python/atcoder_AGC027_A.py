import sys

N = int(input())
x = int(input())
sweet = []
for i in range(N):
    a = int(input())
    sweet.append(a)
sweet.sort()
num = 0
for i in range(N):
    if x - sweet[num] >= 0:
        x = x - sweet[num]
        num += 1
    else:
        break
if (num == N) and (x > 0):
    num -= 1
print(num)