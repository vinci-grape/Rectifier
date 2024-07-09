import sys

n = int(sys.stdin.readline())
list = []
for i in range(n):
    list.append(int(sys.stdin.readline()))

numlist1 = [0] * 100000
numlist2 = [0] * 100000

for i in range(n):
    if i % 2 == 0:
        numlist1[list[i] - 1] += 1
    else:
        numlist2[list[i] - 1] += 1

max11 = 0
max12 = 0
max21 = 0
max22 = 0
val1 = 0
val2 = 0

for i in range(100000):
    if numlist1[i] >= max11:
        max12 = max11
        max11 = numlist1[i]
        val1 = i
    elif numlist1[i] >= max12:
        max12 = numlist1[i]
    if numlist2[i] >= max21:
        max22 = max21
        max21 = numlist2[i]
        val2 = i
    elif numlist2[i] >= max22:
        max22 = numlist2[i]

if val1 != val2:
    ans = n - max11 - max21
else:
    ans = n - max(max12 + max21, max11 + max22)

print(ans)