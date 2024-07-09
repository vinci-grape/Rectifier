#!/usr/bin/python

import sys

def main():
    n,t,f = map(int,sys.stdin.readline().split())
    A = map(int,sys.stdin.readline().split())
    
    for i in range(n):
        if A[i] < pow(10,9) + 1:
            if f == A[i] - minA:
                num += 1
            else:
                if f < A[i] - minA:
                    num = 1
                    f = A[i] - minA
                
    print num

if __name__ == '__main__':
    main()