n = int(input())
array = []

for i in range(n):
    array.append(input())

array.sort()

cnt = 1
a = array[0]

for i in range(1, n):
    if a == array[i]:
        continue
    cnt += 1
    a = array[i]

print(cnt)