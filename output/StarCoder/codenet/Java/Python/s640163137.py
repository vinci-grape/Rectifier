import sys

n = int(sys.stdin.readline())
a = list(map(int, sys.stdin.readline().split()))
swapCount = 0

for i in range(n):
	mini = i
	for j in range(i, n):
		if a[j] < a[mini]:
			mini = j
	if mini!= i:
		v = a[mini]
		a[mini] = a[i]
		a[i] = v
		swapCount += 1

print(" ".join(map(str, a)))
print(swapCount)