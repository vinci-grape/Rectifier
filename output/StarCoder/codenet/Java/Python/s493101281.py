import sys

MOD = 1000000007

def lcm(m, n):
    return m * n / gcd(m, n)

def gcd(m, n):
    if(m < n): return gcd(n, m)
    if(n == 0): return m
    return gcd(n, m % n)

class FastScanner:
    def __init__(self):
        self.tokens = sys.stdin.readline().strip().split()
        self.ptr = 0
    def hasNext(self):
        return self.ptr < len(self.tokens)
    def nextInt(self):
        self.ptr += 1
        return int(self.tokens[self.ptr - 1])

def main():
    sc = FastScanner()
    n = sc.nextInt()
    l = []
    for i in range(n):
        l.append(sc.nextInt())
    l.sort()
    print(l[n//2]-l[n//2-1])

if __name__ == '__main__':
    main()