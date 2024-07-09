import sys
n = int(sys.stdin.readline())
array = []
cnt = 0
cnt2 = 0
for i in range(n):
    array.append(sys.stdin.readline().strip())
array.sort()
a = array[0]
cnt += 1
for i in range(n):
    if a == array[i]:
        pass
    else:
        cnt += 1
        a = array[i]
print(cnt)