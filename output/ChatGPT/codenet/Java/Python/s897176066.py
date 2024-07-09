N = int(input())
A = []
for i in range(N):
    A.append(int(input()))
A.sort()
for j in range(1, N):
    if A[j] == A[j-1]:
        print("NO")
        exit(0)
print("YES")