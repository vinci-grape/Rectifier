import math

N = int(input())
A = [int(input()) for i in range(N)]
min = math.inf
count = 0
sum = 0
for i in A:
    if i < 0:
        count += 1
    min = min(min, abs(i))
    sum += abs(i)
if count % 2 == 0:
    print(sum)
else:
    print(sum - min * 2)