import sys

A1 = int(sys.stdin.readline())
A2 = int(sys.stdin.readline())
A3 = int(sys.stdin.readline())

if ((A1+A2+A3) >= 22):
    print("bust")
else:
    print("win")