import sys

def solve(x, u):
    return sum([x[i] * (1 if u[i] == "JPY" else 380000) for i in range(len(x))])

if __name__ == "__main__":
    N = int(input())
    x = []
    u = []
    for _ in range(N):
        xi, ui = input().split()
        x.append(float(xi))
        u.append(ui)
    print(solve(x, u))