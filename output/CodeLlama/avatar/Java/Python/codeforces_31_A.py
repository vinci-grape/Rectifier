import sys
n = int(sys.stdin.readline())
f = 0
a = []
for i in range(n):
    a.append(int(sys.stdin.readline()))
k = 0
j = 0
i = 0
for k in range(n):
    t = a[k]
    for i in range(n):
        for j in range(n - 1):
            if i != j and t == (a[i] + a[j]):
                f = 1
                break
        if f == 1:
            break
    if f == 1:
        break
if f == 1:
    print(k + 1, j + 1, i + 1)
else:
    print(-1)