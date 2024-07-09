import sys

N = int(raw_input().strip())
X = int(raw_input().strip())
m = [int(raw_input().strip()) for _ in range(N)]
X -= m[0]
min = m[0]
for i in range(1, N):
	X -= m[i]
	if m[i] < min:
		min = m[i]
print N+X/min