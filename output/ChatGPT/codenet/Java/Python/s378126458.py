# Python code

N, Q = map(int, input().split())
s = input()
pre = [0] * (N+1)

for i in range(1, N):
    if s[i-1] == 'A' and s[i] == 'C':
        pre[i] = 1

for i in range(1, N):
    pre[i] += pre[i-1]

for _ in range(Q):
    l, r = map(int, input().split())
    r -= 1
    print(pre[r] - pre[l-1])