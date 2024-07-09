N = int(input())
A = list(map(int, input().split()))
A.sort(reverse=True)
index = 0
max_diff = float('inf')
for i in range(1, N):
    diff = abs(A[0] - 2 * A[i])
    if diff < max_diff:
        max_diff = diff
        index = i
print(A[0], A[index])