import sys

N = int(input())

arr = list(map(int, input().split()))

print(*sorted(arr, key=arr.index))