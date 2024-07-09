import sys

n = int(sys.stdin.readline())
a = list(map(int, sys.stdin.readline().split()))

swap_count = 0

for i in range(n):
    mini = i
    for j in range(i, n):
        if a[j] < a[mini]:
            mini = j
    if mini != i:
        a[i], a[mini] = a[mini], a[i]
        swap_count += 1

print(' '.join(map(str, a)))
print(swap_count)