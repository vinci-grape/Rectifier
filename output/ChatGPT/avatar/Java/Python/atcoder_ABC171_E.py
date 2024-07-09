n = int(input())
a = list(map(int, input().split()))
r = 0
for i in range(n):
    r ^= a[i]

for i in range(n):
    if i != 0:
        print(" ", end="")
    print(r ^ a[i], end="")