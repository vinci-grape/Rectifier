import sys

k = int(sys.stdin.readline())
a = list(map(int, sys.stdin.readline().split()))

max = 3
min = 2

if a[k - 1] != 2:
    print(-1)
    exit()

for i in range(k - 2, -1, -1):
    if a[i] > max:
        print(-1)
        exit()
    else:
        max = ((max // a[i]) + 1) * a[i] - 1
        if min % a[i] != 0:
            min = ((min // a[i]) + 1) * a[i]

    if max <= min:
        print(-1)
        exit()

print(min, max)