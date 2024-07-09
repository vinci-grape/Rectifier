import sys

count = int(sys.stdin.readline())
givingNumbers = list(map(int, sys.stdin.readline().split()))

# Reversing Numbers
for i in range(count-1, -1, -1):
	print(givingNumbers[i], end=' ')

print()