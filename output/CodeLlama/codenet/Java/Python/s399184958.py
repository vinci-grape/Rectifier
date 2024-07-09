import sys

A, B, C = map(int, sys.stdin.readline().split())
if A == B and B == C and C == A:
    print("Yes")
else:
    print("No")