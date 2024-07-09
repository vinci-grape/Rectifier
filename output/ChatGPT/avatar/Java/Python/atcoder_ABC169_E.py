import sys

n = int(input())
ai = []
bi = []

for i in range(n):
    a, b = map(int, input().split())
    ai.append(a)
    bi.append(b)

ai.sort()
bi.sort()

if n % 2 == 1:
    print(bi[n // 2] - ai[n // 2] + 1)
else:
    b = (ai[n // 2] + ai[n // 2 - 1]) / 2
    c = (bi[n // 2] + bi[n // 2 - 1]) / 2
    print(int(2 * (c - b) + 1))