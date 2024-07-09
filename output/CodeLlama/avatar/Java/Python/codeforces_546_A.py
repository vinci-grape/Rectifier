import sys
pandu, vundu, urdu, c = 0, 0, 0, 0
pandu = int(sys.stdin.readline())
vundu = int(sys.stdin.readline())
urdu = int(sys.stdin.readline())
for i in range(1, urdu + 1):
    c += i * pandu
if c < vundu:
    print(0)
else:
    print(c - vundu)