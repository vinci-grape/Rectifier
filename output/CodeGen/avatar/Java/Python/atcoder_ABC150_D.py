def getGCD(a, b):
    if b == 0:
        return a
    else:
        return getGCD(b, a % b)

def main(args):
    n = int(input())
    m = int(input())
    a = [int(x) for x in input().split()]
    gcd = 1
    lcd = 1
    for i in range(n):
        gcd = getGCD(lcd, a[i])
        lcd = lcd * a[i] / gcd
        if lcd > m:
            return 0
    for i in range(n):
        if (lcd / a[i]) % 2 == 0:
            return 0
    return (m / lcd + 1) / 2