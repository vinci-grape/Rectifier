n = int(input())
a = []
for i in range(n):
    a.append(int(input()))
print(a[n-1], end='')
for i in range(1, n):
    print(' ', a[n-i-1], end='')
print()