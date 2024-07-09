n = int(input())
array = list(map(int, input().split()))
array.sort()
head = len(array) - 2
res = 0
for i in range(n):
    res += array[head]
    head -= 2
print(res)