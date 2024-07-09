N = int(input())

while N > 0:
    M = -1
    m = 1001
    addup = 0
    for i in range(N):
        S = int(input())
        addup += S
        if S > M:
            M = S
        if S < m:
            m = S
    print((addup - M - m) / (N - 2))
    N = int(input())