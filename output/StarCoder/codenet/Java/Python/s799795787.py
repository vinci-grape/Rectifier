import sys
n = int(input())
array = []
cnt = 0
cnt2 = 0
for i in range(n):
    array.append(input())
array.sort()
a = array[0]
cnt += 1
for i in range(n):
    if a == array[i]:
        continue
    else:
        cnt += 1
    a = array[i]
print(cnt)