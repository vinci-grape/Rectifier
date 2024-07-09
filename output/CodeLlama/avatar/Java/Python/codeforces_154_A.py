import sys

N = int(sys.stdin.readline())
arr = list(sys.stdin.readline().strip())
K = int(sys.stdin.readline())
res = 0
for k in range(K):
    input = sys.stdin.readline().strip()
    a = 0
    b = 0
    for i in range(N):
        if arr[i] == input[0]:
            a += 1
        elif arr[i] == input[1]:
            b += 1
        else:
            res += min(a, b)
            a = b = 0
    res += min(a, b)
print(res)