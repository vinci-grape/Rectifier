import sys
n = int(sys.stdin.readline())
d = 0
for i in range(n):
    d += int(sys.stdin.readline()) % 2
print("YES" if d % 2 == 0 else "NO")