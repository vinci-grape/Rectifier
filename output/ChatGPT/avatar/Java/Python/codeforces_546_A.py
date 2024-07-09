pandu, vundu, urdu, c = map(int, input().split())

for i in range(1, urdu+1):
    c += i * pandu

if c < vundu:
    print("0")
else:
    print(c - vundu)