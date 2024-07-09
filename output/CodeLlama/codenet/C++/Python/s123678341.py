#!/bin/python3

import sys

def main():
    X, Y, Z, K = map(int, input().strip().split(' '))
    A = list(map(int, input().strip().split(' ')))
    B = list(map(int, input().strip().split(' ')))
    C = list(map(int, input().strip().split(' ')))
    A.sort(reverse=True)
    B.sort(reverse=True)
    C.sort(reverse=True)
    AB = []
    for i in range(X):
        for j in range(Y):
            AB.append(A[i] + B[j])
    AB.sort(reverse=True)
    ABC = []
    for i in range(min(K, len(AB))):
        for j in range(Z):
            ABC.append(AB[i] + C[j])
    ABC.sort(reverse=True)
    for i in range(K):
        print(ABC[i])

if __name__ == "__main__":
    main()