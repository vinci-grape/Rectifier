INF = int(1e9) + 5

n = int(input())
a = []
b = []
left = INF
right = 0

for i in range(n):
    a.append(int(input()))
    b.append(int(input()))
    left = min(left, a[i])
    right = max(right, b[i])

for i in range(n):
    if left == a[i] and right == b[i]:
        print(i+1)
        exit()

print(-1)