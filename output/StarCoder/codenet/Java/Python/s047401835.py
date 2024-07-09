import sys

N = int(input())
numbers = []

for i in range(N):
    numbers.append(int(input()))

count = 0

while True:
    numbers = list(filter(lambda x: x % 2 == 0, numbers))
    numbers = list(map(lambda x: x / 2, numbers))
    if len(numbers) == N:
        count += 1
    else:
        break

print(count)