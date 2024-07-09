def main(n, m, gcd):
    s = raw_input()
    t = raw_input()
    return min(filter(lambda k: s[k * n // gcd]!= t[k * m // gcd], range(gcd)), key=lambda k: -1 if k is None else k * n // gcd)

if __name__ == '__main__':
    n = int(raw_input())
    m = int(raw_input())
    gcd = int(raw_input())
    s = raw_input()
    t = raw_input()
    print min(filter(lambda k: s[k * n // gcd]!= t[k * m // gcd], range(gcd)), key=lambda k: -1 if k is None else k * n // gcd)