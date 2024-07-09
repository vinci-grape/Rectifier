import sys

h1, m1, h2, m2, k = map(int, sys.stdin.readline().split())

t1 = h1 * 60 + m1
t2 = h2 * 60 + m2

print(t2-t1-k)