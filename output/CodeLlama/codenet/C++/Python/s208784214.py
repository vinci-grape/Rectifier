import sys
N, A = map(int, sys.stdin.readline().split())
print("Yes" if N % 500 <= A else "No")