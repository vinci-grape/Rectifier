n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
sum = 0
for i in range(n):
    if a[i] - b[i] > 0:
        sum += a[i] - b[i]
print(sum)