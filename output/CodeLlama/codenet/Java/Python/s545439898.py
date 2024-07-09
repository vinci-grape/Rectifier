import sys

n = int(sys.stdin.readline())

arr = list(map(int, sys.stdin.readline().split()))

for i in range(n-1, -1, -1):

    print(arr[i], end=" ")