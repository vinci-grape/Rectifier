N = int(input())
mem = [0] * (N + 1)
for i in range(1, N + 1):
    P = int(input())
    mem[P] = i

maxcnt = 1
cnt = 1
for i in range(1, N):
    if mem[i] < mem[i + 1]:
        cnt += 1
    else:
        maxcnt = max(maxcnt, cnt)
        cnt = 1
    if i == N - 1:
        maxcnt = max(maxcnt, cnt)

print(N - maxcnt)