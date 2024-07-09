import sys

n = int(sys.stdin.readline())
array = []
max = 0
min = 10000
for i in range(n):
    array.append(int(sys.stdin.readline()))
    if max < array[i]:
        max = array[i]
    if min > array[i]:
        min = array[i]
print(max - min)