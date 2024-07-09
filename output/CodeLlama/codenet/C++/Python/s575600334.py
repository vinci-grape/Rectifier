import sys

def binPrint(x, bits):
    for i in range(bits-1, -1, -1):
        print(x&(1<<i), end='')
    print()

a, b = map(int, sys.stdin.readline().split())

binPrint(a&b, 32)
binPrint(a|b, 32)
binPrint(a^b, 32)