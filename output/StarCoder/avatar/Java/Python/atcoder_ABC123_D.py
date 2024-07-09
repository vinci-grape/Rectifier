import sys
input = sys.stdin.readline

n = int(input())
a = [list(map(int, input().split())) for _ in range(3)]
k = int(input())

ans = []
for i in range(a[0][0]):
    for j in range(a[1][0]):
        for m in range(a[2][0]):
            if (i+1)*(j+1)*(m+1) <= k:
                tmp = a[0][1] + a[1][1] + a[2][1]
                ans.append(tmp)
ans.sort()
for i in range(k):
    print(ans[-i-1])