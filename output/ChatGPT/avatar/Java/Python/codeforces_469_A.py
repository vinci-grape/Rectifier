n = int(input())
levels = int(input())
sum = 0
sum2 = 0
sum3 = 0
arr = []
count = 0

for i in range(levels):
    arr.append(int(input()))

level2 = int(input())
level3 = levels + level2
arr2 = arr.copy()

for i in range(len(arr), level3):
    arr2.append(int(input()))

arr3 = list(range(1, n+1))
j = 0

for i in range(n):
    arr3[i] = j = j + 1

for i in range(n):
    for x in range(len(arr2)):
        if arr3[i] == arr2[x]:
            count += 1
            break

if count == n:
    print("I become the guy.")
else:
    print("Oh, my keyboard!")