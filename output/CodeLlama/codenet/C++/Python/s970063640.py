import sys
n = int(sys.stdin.readline())
a = int(sys.stdin.readline())
s = list(map(int, sys.stdin.readline().split()))
s.sort()
sum = 0
for i in range(n-a-1, n):
    sum += s[i]
print(sum)