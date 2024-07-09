import sys
n = int(sys.stdin.readline())
levels = int(sys.stdin.readline())
sum = 0
sum2 = 0
sum3 = 0
arr = []
count = 0
for i in range(levels):
    arr.append(int(sys.stdin.readline()))
level2 = int(sys.stdin.readline())
level3 = levels + level2
arr2 = []
for i in range(levels):
    arr2.append(arr[i])
for i in range(levels, level3):
    arr2.append(int(sys.stdin.readline()))
arr3 = []
j = 0
for i in range(n):
    arr3.append(j + 1)
    j += 1
for i in range(n):
    for x in range(level3):
        if arr3[i] == arr2[x]:
            count += 1
            break
if count == n:
    print("I become the guy.")
else:
    print("Oh, my keyboard!")