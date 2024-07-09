import sys
import math

def main():
    N, M = map(int, sys.stdin.readline().split())
    a = [0] * N
    for i in range(N):
        a[i] = 0
    for i in range(M):
        k = int(sys.stdin.readline())
        for j in range(k):
            s = int(sys.stdin.readline())
            s -= 1
            a[s] |= (1 << i)
    p = 0
    for i in range(M):
        x = int(sys.stdin.readline())
        p |= (x << i)
    ans = 0
    for s in range(1 << N):
        t = 0
        for i in range(N):
            if (s >> i) & 1:
                t ^= a[i]
        if p == t:
            ans += 1
    print(ans)


if __name__ == '__main__':
    main()