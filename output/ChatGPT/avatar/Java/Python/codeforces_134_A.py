import sys

n = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))
sum = sum(arr)

c = 0
sb = []
for i in range(n):
    if (sum - arr[i]) % (n - 1) == 0 and (sum - arr[i]) // (n - 1) == arr[i]:
        c += 1
        sb.append(str(i + 1))

print(c)
print(' '.join(sb))