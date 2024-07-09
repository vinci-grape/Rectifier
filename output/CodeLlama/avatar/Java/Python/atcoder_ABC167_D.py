import sys
import math

def main():
    N = int(sys.stdin.readline().rstrip())
    K = int(sys.stdin.readline().rstrip())
    A = [int(sys.stdin.readline().rstrip()) - 1 for _ in range(N)]
    used = set()
    idx = [0] * N
    pos = [0] * N
    next = 0
    cur = 0
    while next not in used:
        used.add(next)
        idx[next] = cur
        pos[cur] = next
        next = A[next]
        cur += 1
    a = cur - idx[next]
    b = idx[next]
    ans = (10000 * a + K - b) % a + b
    if b > K:
        ans = K
    print(pos[ans] + 1)

if __name__ == '__main__':
    main()