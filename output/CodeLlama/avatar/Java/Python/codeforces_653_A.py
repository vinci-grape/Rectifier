import sys

n = int(sys.stdin.readline())
a = []
for i in range(n):
    a.append(int(sys.stdin.readline()))
a = sorted(set(a))
found = False
for i in range(len(a)):
    if i + 1 < len(a) and i + 2 < len(a):
        if a[i] + 1 == a[i + 1] and a[i + 1] + 1 == a[i + 2]:
            found = True
            break
print("YES" if found else "NO")