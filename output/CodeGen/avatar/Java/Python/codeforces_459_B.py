import sys
import math

def main ():
    N = int(input())
    A = [int(i) for i in input().split()]
    A.sort()
    min = A[0]
    max = A[N-1]
    mins = 0
    maxs = 0
    for value in A:
        if value == min:
            mins += 1
        if value == max:
            maxs += 1
    if min == max:
        print(max - min, mins * (mins - 1) / 2)
    else:
        print(max - min, mins * maxs)

if __name__ == "__main__":
    sys.exit(main())