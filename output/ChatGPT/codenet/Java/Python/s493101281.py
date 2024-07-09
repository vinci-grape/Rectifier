import sys
import math


MOD = 1000000007

class FastScanner:
    def __init__(self):
        self.inp = sys.stdin.buffer.read().split()
        self.ptr = 0

    def read_byte(self):
        if self.ptr < len(self.inp):
            self.ptr += 1
            return self.inp[self.ptr - 1]
        else:
            return -1

    def has_next_byte(self):
        return self.ptr < len(self.inp)

    def is_printable_char(self, c):
        return 33 <= c <= 126

    def has_next(self):
        while self.has_next_byte() and not self.is_printable_char(self.read_byte()):
            pass
        return self.has_next_byte()

    def next(self):
        if not self.has_next():
            raise Exception("No more tokens")
        res = bytearray()
        b = self.read_byte()
        while self.is_printable_char(b):
            res.append(b)
            b = self.read_byte()
        return res.decode()

    def next_int(self):
        return int(self.next())

    def next_long(self):
        return int(self.next())

    def next_double(self):
        return float(self.next())

def main():
    sc = FastScanner()
    out = sys.stdout

    n = sc.next_int()
    l = []

    for i in range(n):
        l.append(sc.next_int())

    l.sort()

    print(l[n//2] - l[n//2 - 1])

    out.flush()

if __name__ == "__main__":
    main()