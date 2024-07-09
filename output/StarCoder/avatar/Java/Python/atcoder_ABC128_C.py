import sys
input = sys.stdin.readline

class atcoder_ABC128_C:
    def __init__(self):
        self.run()

    def run(self):
        N, M = map(int, input().split())
        a = [0] * N
        for _ in range(M):
            k = int(input())
            for _ in range(k):
                s = int(input())
                s -= 1
                a[s] |= 1 << _
        p = 0
        for _ in range(M):
            x = int(input())
            p |= x << _
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
    atcoder_ABC128_C()