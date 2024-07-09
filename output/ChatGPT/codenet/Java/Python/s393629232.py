n = int(input())
maxv = float('-inf')
minv = int(input())
for i in range(1, n):
    ri = int(input())
    maxv = max(maxv, ri - minv)
    minv = min(minv, ri)
print(maxv)