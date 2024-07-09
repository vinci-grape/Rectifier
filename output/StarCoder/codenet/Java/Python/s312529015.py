import sys

A = int(sys.stdin.readline())
B = int(sys.stdin.readline())
if A%3==0 or B%3==0 or (A+B)%3==0:
    print("Possible")
else:
    print("Impossible")