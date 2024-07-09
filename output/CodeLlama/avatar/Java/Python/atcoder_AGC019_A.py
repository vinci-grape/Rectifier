import sys

Q, H, S, D, N = map(int, sys.stdin.readline().split())

one_price = min(min(Q * 4, H * 2), S)

if one_price <= D / 2:

    print(N * one_price)

else:

    print((N // 2) * D + (N % 2) * one_price)