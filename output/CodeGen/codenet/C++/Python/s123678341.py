#!/usr/bin/python

import sys
import math
import random
import string
import time
import datetime
import os

def main():
    # read input
    X = int(sys.argv[1])
    Y = int(sys.argv[2])
    Z = int(sys.argv[3])
    K = int(sys.argv[4])
    
    A = []
    for i in range(X):
        A.append(int(sys.argv[5 + i]))
    B = []
    for i in range(Y):
        B.append(int(sys.argv[5 + X + i]))
    C = []
    for i in range(Z):
        C.append(int(sys.argv[5 + X + Y + i]))
    
    # sort
    A = sorted(A)
    B = sorted(B)
    C = sorted(C)
    
    # calculate
    AB = []
    for i in range(X):
        for j in range(Y):
            AB.append(A[i] + B[j])
    
    AB = sorted(AB)
    ABC = []
    for i in range(min(K, len(AB))):
        for j in range(Z):
            ABC.append(AB[i] + C[j])
    
    ABC = sorted(ABC)
    
    # output
    for i in range(K):
        print ABC[i]
    
if __name__ == '__main__':
    start = datetime.datetime.now()
    main()
    delta = datetime.datetime.now() - start
    print'real    time:', delta.seconds + 1e-6 * delta.microseconds