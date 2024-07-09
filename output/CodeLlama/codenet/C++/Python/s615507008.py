import sys

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
    N = int(sys.stdin.readline().rstrip())
    T = list(map(int, sys.stdin.readline().rstrip().split()))
    M = int(sys.stdin.readline().rstrip())
    P = list(map(int, sys.stdin.readline().rstrip().split()))
    X = list(map(int, sys.stdin.readline().rstrip().split()))
    solve(N, T, M, P, X)