import sys
n = int(sys.stdin.readline())
i = 1
k = 0
p = 1
flag = True
a = [0] * 1000
while k <= n:
    i += k
    if i >= n:
        while not (i < n):
            i = i - n
    a[i] += 1
    k += 1
for i in range(n):
    if a[i] == 0:
        flag = False
        break
if flag:
    print("YES")
else:
    print("NO")