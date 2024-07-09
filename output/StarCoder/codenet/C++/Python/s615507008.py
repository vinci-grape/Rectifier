from sys import stdin

def solve(N, T, M, P, X):
    for i in range(M):
        ans = 0
        for j in range(N):
            if j == P[i] - 1:
                ans += X[i]
            else:
                ans += T[j]
        print(ans)

if __name__ == '__main__':
    N = int(stdin.readline())
    T = list(map(int, stdin.readline().split()))
    M = int(stdin.readline())
    P = list(map(int, stdin.readline().split()))
    X = list(map(int, stdin.readline().split()))
    solve(N, T, M, P, X)