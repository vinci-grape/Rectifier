import sys

N = int(sys.stdin.readline().rstrip())
x = list(map(float, sys.stdin.readline().rstrip().split()))
u = sys.stdin.readline().rstrip().split()

print(solve(x, u))


def solve(x, u):
    return sum(x[i] * (1 if u[i] == "JPY" else 380000) for i in range(N))