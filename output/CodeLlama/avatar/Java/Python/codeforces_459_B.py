import sys
import math

def main():
    N = int(sys.stdin.readline())
    A = []
    for i in range(N):
        A.append(int(sys.stdin.readline()))
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
        print(str(max - min) + " " + str(mins * (mins - 1) / 2))
    else:
        print(str(max - min) + " " + str(mins * maxs))

if __name__ == "__main__":
    main()