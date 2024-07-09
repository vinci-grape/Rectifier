import sys
import collections

def main():
    input = sys.stdin.readline
    MOD = 10 ** 9 + 7
    N = int(input())
    A = list(map(int, input().split()))
    R = [a % 10 for a in A]
    Q = collections.deque()
    for i in range(N):
        if R[i]!= 0:
            Q.append(10 - R[i])
        Q.append(A[i])
    ans = 0
    while len(Q) > 1:
        a = Q.popleft()
        b = Q.popleft()
        ans += (a + b) % MOD
    print(ans % MOD)


if __name__ == '__main__':
    main()