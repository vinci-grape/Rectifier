import sys

def main():
    input = sys.stdin.readline
    P, Q = 37, 47
    powP, powQ = [1], [1]
    for i in range(1, 1001):
        powP.append(powP[-1] * P)
        powQ.append(powQ[-1] * Q)
    n = int(input())
    a = [list(input().strip()) for _ in range(n)]
    hashRow, hashCol = [[0] * n for _ in range(n)], [[0] * n for _ in range(n)]
    for i in range(n):
        for j in range(n):
            for k in range(n):
                hashRow[i][k] += a[i][j] * powP[(j - k + n) % n]
                hashCol[j][k] += a[i][j] * powP[(i - k + n) % n]
    ans = 0
    for A in range(n):
        for B in range(n):
            ok = True
            for i in range(n):
                ok &= hashRow[(i + A) % n][B] == hashCol[(i + B) % n][A]
            ans += ok
    print(ans)

if __name__ == '__main__':
    main()