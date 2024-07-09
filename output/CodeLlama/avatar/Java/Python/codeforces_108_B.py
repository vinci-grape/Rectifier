import sys
n = int(sys.stdin.readline())
a = list(map(int, sys.stdin.readline().split()))
a.sort()
for i in range(n-1):
    if a[i+1] < a[i]*2 and a[i] != a[i+1]:
        print("YES")
        exit()
print("NO")