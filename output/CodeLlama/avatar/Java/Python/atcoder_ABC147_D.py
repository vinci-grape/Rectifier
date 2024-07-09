import sys
import math

def main():
    n = int(sys.stdin.readline().rstrip())
    A = list(map(int, sys.stdin.readline().rstrip().split()))
    div = 1000000007
    ans = 0
    for i in range(60):
        a = 0
        count1 = 0
        for j in range(n):
            if (A[j] >> i) & 1 == 1:
                count1 += 1
        a = a + count1 * (n - count1)
        for j in range(i):
            a = a << 1
            a %= div
        ans += a
        ans %= div
    print(ans)


if __name__ == "__main__":
    main()