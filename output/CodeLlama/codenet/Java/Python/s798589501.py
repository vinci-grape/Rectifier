import sys

E, Y = map(int, sys.stdin.readline().split())

if E == 0:
    if Y <= 1911:
        print("M", Y - 1867)
    elif Y <= 1925:
        print("T", Y - 1911)
    elif Y <= 1988:
        print("S", Y - 1925)
    else:
        print("H", Y - 1988)
elif E == 1:
    print(1867 + Y)
elif E == 2:
    print(1911 + Y)
elif E == 3:
    print(1925 + Y)
else:
    print(1988 + Y)