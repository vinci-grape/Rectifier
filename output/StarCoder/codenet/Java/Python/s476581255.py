import sys

def bubbleSort(a):
    count = 0
    for i in range(len(a)-1):
        for j in range(len(a)-1):
            if a[j] > a[j+1]:
                a[j], a[j+1] = a[j+1], a[j]
                count += 1
    return count

n = int(input())
a = list(map(int, input().split()))
print(bubbleSort(a))
for i in range(n):
    if i < n-1:
        print(a[i], end=' ')
    else:
        print(a[i])