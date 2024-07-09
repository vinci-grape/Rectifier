# Python code equivalent to the given C++ code

n = int(input())
array = [int(x) for x in input().split()]

sum = 0
for i in range(n-1):
  for j in range(i+1, n):
    sum += array[i] * array[j]

print(sum)