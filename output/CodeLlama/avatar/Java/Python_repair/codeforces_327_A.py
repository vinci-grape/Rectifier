import sys

def checKNo(brr):
    val = 0
    for i in brr:
        if i == 1:
            val += 1
    return val

n = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))
max = 0
for i in range(n):
    for j in range(i, n):
        x = 0
        brr = [0] * n
        for k in arr:
            brr[x] = k
            x += 1
        for k in range(i, j + 1):
            if brr[k] == 0:
                brr[k] = 1
            else:
                brr[k] = 0
        count = checKNo(brr)
        if count > max:
            max = count
if n == 1:
    if arr[0] == 1:
        print(0)
    else:
        print(1)
else:
    print(max)