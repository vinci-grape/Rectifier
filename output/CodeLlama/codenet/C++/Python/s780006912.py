n = int(input())
array = [int(input()) for i in range(n)]
sum = 0
for i in range(n-1):
    for j in range(i+1, n):
        sum += array[i]*array[j]
print(sum)