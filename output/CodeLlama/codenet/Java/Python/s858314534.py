import sys

A, B, T = map(int, sys.stdin.readline().split())

print((T // A) * B)