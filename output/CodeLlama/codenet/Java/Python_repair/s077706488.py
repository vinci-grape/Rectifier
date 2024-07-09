import sys
N = int(sys.stdin.readline())
X = int(sys.stdin.readline())
m = []
m.append(int(sys.stdin.readline()))
X -= m[0]
min = m[0]
for i in range(1, N):
    m.append(int(sys.stdin.readline()))
    X -= m[i]
    if m[i] < min:
        min = m[i]
print(N+X/min)