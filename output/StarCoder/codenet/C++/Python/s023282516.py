import sys

S = sys.stdin.readline().strip()

# 後ろから解くかわりにすべての文字列を「左右反転」する
S = S[::-1]
for i in range(4):
    divide[i] = divide[i][::-1]

# 端から切っていく
can = True
for i in range(len(S)):
    can2 = False
    for j in range(4):
        d = divide[j]
        if S[i:i+len(d)] == d:
            can2 = True
            i += len(d)
    if not can2:
        can = False
        break

if can:
    print("YES")
else:
    print("NO")