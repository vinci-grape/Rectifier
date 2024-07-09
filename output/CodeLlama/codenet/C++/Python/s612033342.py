import sys

def pow2(a):
    ret = 1
    for i in range(a):
        ret *= 2
    return ret

def count(hw, a, b):
    sum = 0
    for i in range(len(hw)):
        for j in range(len(hw[0])):
            if (a >> i & 1) and (b >> j & 1) and hw[i][j] == 1:
                sum += 1
    return sum

h, w, k = map(int, sys.stdin.readline().split())
hw = [[0 for _ in range(w)] for _ in range(h)]
for i in range(h):
    for j in range(w):
        c = sys.stdin.readline().strip()
        if c == '#':
            hw[i][j] = 1
sum = 0
for i in range(pow2(h)):
    for j in range(pow2(w)):
        if count(hw, i, j) == k:
            sum += 1
print(sum)