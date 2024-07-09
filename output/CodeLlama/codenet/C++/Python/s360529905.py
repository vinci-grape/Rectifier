import sys
N = int(sys.stdin.readline())
a = list(map(int, sys.stdin.readline().split()))
b = a[:]
b.sort()
frontHalf = b[N//2-1]
backHalf = b[N//2]
for i in range(N):
    if a[i] < backHalf:
        print(backHalf)
    else:
        print(frontHalf)