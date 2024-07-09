def pow(a, k):
    if k < 0: k += (1 << 63) - 1
    t = 1
    while k:
        if k & 1: t = t * a
        a = a * a
        k >>= 1
    return t

def main():
    n = int(input())
    s = input()[1:]
    f = [0] * (n + 1)
    g = [0] * (n + 1)
    for i in range(1, n + 1):
        if s[i] == '+':
            f[i] = f[i - 1] + 1
            g[i] = g[i - 1]
        elif s[i] == '-':
            f[i] = f[i - 1] - 1
            g[i] = g[i - 1]
        else:
            f[i] = f[i - 1]
            g[i] = g[i - 1] + (s[i] == '<' and -1 or 1)
    for i in range(n, -1, -1):
        f[i] = f[i + 1] * pow(B, g[i]) + f[i + 1]
        map[f[i]] = map.get(f[i], 0) + 1
        cnt += map[f[n] * pow(B, g[i - 1]) + f[i - 1]]
    print(cnt)

main()