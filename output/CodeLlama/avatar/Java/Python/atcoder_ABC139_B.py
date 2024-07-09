import sys

A, B = map(int, sys.stdin.readline().split())

result = (B - 1) // (A - 1)

amari = (B - 1) % (A - 1)

if amari != 0:

    result += 1

print(result)