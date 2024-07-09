N = int(input())
numbers = []

for i in range(N):
    numbers.append(int(input()))

count = 0

while len(numbers) == N:
    numbers = [i // 2 for i in numbers if i % 2 == 0]
    count += 1

print(count)