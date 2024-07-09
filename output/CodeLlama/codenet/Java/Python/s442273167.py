import sys
n = int(sys.stdin.readline())
l = []
r = []
for i in range(n):
    l.append(int(sys.stdin.readline()))
    r.append(int(sys.stdin.readline()))
sum = 0
for i in range(n):
    sum += r[i] - l[i] + 1
print(sum)