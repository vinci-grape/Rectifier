import sys

A = int(sys.stdin.readline())
B = int(sys.stdin.readline())
C = int(sys.stdin.readline())

if A == B and B == C and C == A:
    print("Yes")
else:
    print("No")