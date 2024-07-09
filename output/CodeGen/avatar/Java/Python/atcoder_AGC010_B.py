def possible(N, A):
    sum = 0
    for i in range(N):
        sum += A[i]
    NS = (N * (N + 1)) // 2
    K = sum // NS
    for i in range(N):
        j = i == 0 and N - 1 or i - 1
        d = K - (A[i] - A[j])
        if d < 0 or d % N!= 0:
            return False
    return True