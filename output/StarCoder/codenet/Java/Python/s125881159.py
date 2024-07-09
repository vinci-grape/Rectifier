n = int(input())
d = 0
for i in range(n):
    d += int(input()) % 2
print("YES" if d % 2 == 0 else "NO")