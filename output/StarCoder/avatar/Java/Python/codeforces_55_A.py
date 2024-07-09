import sys
n = int(sys.stdin.readline())
a = [0]*1000
for i in range(n):
    a[i] = 1
for i in range(n):
    if a[i] == 0:
        print("NO")
        break
else:
    print("YES")