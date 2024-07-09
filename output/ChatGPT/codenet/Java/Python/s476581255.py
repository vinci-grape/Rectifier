def bubbleSort(a):
    n = len(a)
    count = 0
    flag = True
    while flag:
        flag = False
        for j in range(n-1, 0, -1):
            if a[j] < a[j-1]:
                a[j], a[j-1] = a[j-1], a[j]
                count += 1
                flag = True
    return count

n = int(input())
a = list(map(int, input().split()))

count = bubbleSort(a)

for i in range(n):
    if i < n-1:
        print(a[i], end=" ")
    else:
        print(a[i])

print(count)