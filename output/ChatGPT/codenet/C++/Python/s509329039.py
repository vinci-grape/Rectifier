n, m = map(int, input().split())
s = []
c = []

for i in range(m):
    s_i, c_i = map(int, input().split())
    s.append(s_i - 1)  # adjust index to 0-based
    c.append(c_i)

for i in range(1000):
    st = str(i).zfill(n)
    f = True
    for j in range(m):
        if st[s[j]] != str(c[j]):
            f = False
            break
    if f:
        print(i)
        break
else:
    print(-1)