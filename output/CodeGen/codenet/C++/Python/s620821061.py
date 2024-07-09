def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a%b)

def exec():
    bm = BitMatching(MN)
    for i in range(0, MN):
        for j in range(0, MN):
            if gcd(a[i], b[j])!= 1:
                bm.add(i, j)
    return bm.exec()