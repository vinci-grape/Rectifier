import sys

K, S = sys.stdin.readline().split()
K = int(K)

if len(S) <= K:
    print(S)
else:
    print(S[:K] + "...")