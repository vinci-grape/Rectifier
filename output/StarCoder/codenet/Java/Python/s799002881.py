import sys

n, d = map(int, sys.stdin.readline().split())

cnt = 0

for i in range(n):
    x, y = map(int, sys.stdin.readline().split())
    if(x*x+y*y)**0.5 <= d:
        cnt += 1

print(cnt)