import sys
input = sys.stdin.readline

H, W = map(int, input().split())

if H == 1 or W == 1:
    print(1)
else:
    print(H*W//2)