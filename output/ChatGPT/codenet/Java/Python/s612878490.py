import sys

# Read input from stdin
lines = sys.stdin.readlines()
line = lines[0].strip().split()
N = int(line[0])
M = int(line[1])

shortage = []

for i in range(1, M+1):
    line = lines[i].strip().split()
    A = int(line[0])
    shortage.append(N - A if N > A else 0)

shortage.sort()

ans = 0

for i in range(M-1):
    ans += shortage[i]

print(ans)