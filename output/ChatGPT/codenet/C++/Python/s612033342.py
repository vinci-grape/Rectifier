def count(hw, a, b):
    sum = 0
    for i in range(len(hw)):
        for j in range(len(hw[0])):
            if (a >> i & 1) and (b >> j & 1) and (hw[i][j] == 1):
                sum += 1
    return sum

h, w, k = map(int, input().split())
hw = [[0] * w for _ in range(h)]
for i in range(h):
    row = input()
    for j in range(w):
        if row[j] == '#':
            hw[i][j] = 1

sum = 0
for i in range(2 ** h):
    for j in range(2 ** w):
        if count(hw, i, j) == k:
            sum += 1

print(sum)