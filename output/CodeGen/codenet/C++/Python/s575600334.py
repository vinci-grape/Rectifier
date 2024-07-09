def binPrint(x, bits):
    for i in range(bits-1, -1, -1):
        print(x&(1<<i) and 1 or 0)
    print()

def main():
    a, b = map(int, input().split())
    binPrint(a&b, 32)
    binPrint(a|b, 32)
    binPrint(a^b, 32)

main()