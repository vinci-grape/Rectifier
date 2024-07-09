import sys
N = int(sys.stdin.readline())
A = list(map(int, sys.stdin.readline().split()))
count = 0
for i in range(N):
    if i == N - 1:
        count += 1
    else:
        if A[i] == A[i + 1]:
            pass
        elif A[i] < A[i + 1]:
            while A[i] <= A[i + 1]:
                i += 1
                if i == N - 1:
                    break
            count += 1
        else:
            while A[i] >= A[i + 1]:
                i += 1
                if i == N - 1:
                    break
            count += 1
print(count)