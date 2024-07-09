import sys
n = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))
sum = 0
for i in range(n):
    sum += arr[i]
c = 0
sb = ''
for i in range(n):
    if (sum - arr[i]) % (n - 1) == 0 and (sum - arr[i]) / (n - 1) == arr[i]:
        c += 1
        sb += str(i + 1) + ' '
print(c)
print(sb)