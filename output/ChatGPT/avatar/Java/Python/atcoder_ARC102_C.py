mod = 998244353
nchoosek = [[0] * 4001 for _ in range(4001)]

for i in range(len(nchoosek)):
    nchoosek[i][0] = nchoosek[i][i] = 1

for i in range(2, len(nchoosek)):
    for j in range(1, i):
        nchoosek[i][j] = (nchoosek[i - 1][j] + nchoosek[i - 1][j - 1]) % mod

k = int(input())
n = int(input())

for i in range(2, 2 * k + 1):
    if i > k:
        pairs = k - i // 2
    else:
        pairs = (i - 1) // 2

    active = k - 2 * pairs
    if i % 2 == 0:
        active -= 1

    times2 = 1
    total = 0

    for j in range(pairs + 1):
        choice = times2 * nchoosek[pairs][j] % mod
        times2 = times2 * 2 % mod

        if active + j - 1 < 0:
            continue

        total += choice * nchoosek[n + active - 1][active + j - 1]

        if i % 2 == 0:
            total += choice * nchoosek[n + active - 2][active + j - 1]

        total %= mod

    print(total)