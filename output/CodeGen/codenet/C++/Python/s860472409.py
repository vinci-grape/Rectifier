#!/usr/bin/python

import sys

def main():
    N = int(sys.argv[1])
    A = []
    for i in range(0,N):
        A.append(int(sys.argv[2]))
    i = 0
    ans = 0
    count = 0
    while A[i+1]!= None:
        if A[i] == A[i+1]:
            count += 1
            if count % 2!= 0:
                ans += 1
        else:
            count = 0
        i += 1
    print ans

if __name__ == '__main__':
    main()