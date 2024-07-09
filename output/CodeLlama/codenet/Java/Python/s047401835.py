import sys

N = int(input())
numbers = list(map(int, sys.stdin.readline().split()))

count = 0

while True:
    numbers = list(filter(lambda x: x % 2 == 0, numbers))
    numbers = list(map(lambda x: x / 2, numbers))
    if len(numbers) == N:
        count += 1
    if len(numbers) == 1:
        break

print(count)