import sys

n, q = map(int, sys.stdin.readline().split())
c = sys.stdin.readline().rstrip()
range = []
for i in range(q):
    range.append(list(map(int, sys.stdin.readline().split())))
frag = [0] * (n + 1)
rui = [0] * (n + 1)
for i in range(2, n + 1):
    if c[i - 2] == 'A' and c[i - 1] == 'C':
        frag[i] += 1
    rui[i] = rui[i - 1] + frag[i]
for i in range(q):
    left, right = range[i]
    print(rui[right] - rui[left])