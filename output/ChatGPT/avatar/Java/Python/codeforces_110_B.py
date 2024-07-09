n = int(input())
c = [''] * n

for i in range(4):
    for j in range(i, n, 4):
        c[j] = chr(97 + i)

for i in range(n):
    print(c[i], end='')