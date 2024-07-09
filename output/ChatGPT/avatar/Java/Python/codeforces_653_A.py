n = int(input())
a = []
for _ in range(n):
    value = int(input())
    a.append(value)
a = list(set(a))
a.sort()
found = False
for i in range(len(a)):
    if i + 1 < len(a) and i + 2 < len(a):
        if a[i] + 1 == a[i + 1] and a[i + 1] + 1 == a[i + 2]:
            found = True
print("YES" if found else "NO")