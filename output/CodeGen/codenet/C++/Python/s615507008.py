def solve(N, T, M, P, X):
    for i in range(M):
        ans = 0
        for j in range(N):
            if j == P[i] - 1:
                ans += X[i]
            else:
                ans += T[j]
        print(ans)

solve(N, T, M, P, X)