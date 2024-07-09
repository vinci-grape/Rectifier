import sys

def sol():
    s = sys.stdin.readline().strip()
    cum = [0] * (len(s) + 1)
    for i in range(1, len(s)):
        if s[i] == s[i - 1]:
            cum[i] = cum[i - 1] + 1
        else:
            cum[i] = cum[i - 1]
    q = int(sys.stdin.readline().strip())
    for _ in range(q):
        l, r = map(int, sys.stdin.readline().strip().split())
        print(cum[r - 1] - cum[l - 2] if l > 1 else cum[r - 1])

sol()