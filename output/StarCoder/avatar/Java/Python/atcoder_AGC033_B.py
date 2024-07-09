import sys

h, w, n, sr, sc = map(int, sys.stdin.readline().split())
s = sys.stdin.readline().rstrip()
t = sys.stdin.readline().rstrip()

usafe = 1
dsafe = h
for i in range(n-1, -1, -1):
    if s[i] == 'U':
        usafe += 1
    elif s[i] == 'D':
        dsafe -= 1
    if usafe > dsafe:
        print("NO")
        sys.exit()
    if i > 0:
        if t[i-1] == 'U':
            dsafe = min(dsafe + 1, h)
        elif t[i-1] == 'D':
            usafe = max(usafe - 1, 1)

lsafe = 1
rsafe = w
for i in range(n-1, -1, -1):
    if s[i] == 'L':
        lsafe += 1
    elif s[i] == 'R':
        rsafe -= 1
    if lsafe > rsafe:
        print("NO")
        sys.exit()
    if i > 0:
        if t[i-1] == 'L':
            rsafe = min(rsafe + 1, w)
        elif t[i-1] == 'R':
            lsafe = max(lsafe - 1, 1)

if sr >= usafe and sr <= dsafe and sc >= lsafe and sc <= rsafe:
    print("YES")
else:
    print("NO")