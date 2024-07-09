import sys
n = int(sys.stdin.readline())
v = list(map(int, sys.stdin.readline().split()))
c = list(map(int, sys.stdin.readline().split()))
max = 0
for i in range(n):
    profit = v[i] - c[i]
    if profit > 0:
        max += profit
print(max)