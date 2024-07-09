import sys

n = int(sys.stdin.readline())
a = list(map(int, sys.stdin.readline().split()))
count = bubbleSort(a, n)
print(*a)
print(count)

def bubbleSort(a, n):
    flag = True
    count = 0
    while flag:
        flag = False
        for j in range(n-1, 0, -1):
            if a[j] < a[j-1]:
                a[j], a[j-1] = a[j-1], a[j]
                count += 1
                flag = True
    return count