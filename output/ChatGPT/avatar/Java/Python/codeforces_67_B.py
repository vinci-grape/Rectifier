n, k = map(int, input().split())
bb = list(map(int, input().split()))
aa = [0] * n
m = 0
for a in range(n - 1, -1, -1):
    j = 0
    while bb[a] > 0:
        if aa[j] >= a + k:
            bb[a] -= 1
        j += 1
    for j_ in range(m, j, -1):
        aa[j_] = aa[j_ - 1]
    aa[j] = a
for i in range(n):
    print(aa[i] + 1, end=" ")