import sys

class RemRing:
    def __init__(self, module):
        self.module = module

    def sum(self, a, b):
        return (a + b + self.module) % self.module

    def sub(self, a, b):
        return (a - b + self.module) % self.module

    def prod(self, a, b):
        return (a * b) % self.module

    def div(self, a, b):
        return (a * self.inv(b)) % self.module

    def inv(self, a):
        b = self.module
        u = 1
        v = 0
        while b > 0:
            t = a // b
            a -= t * b
            u -= t * v
            z = a
            a = b
            b = z
            z = u
            u = v
            v = z
        u %= self.module
        if u < 0:
            u += self.module
        return u

class Main:
    def __init__(self):
        self.reader = sys.stdin
        self.writer = sys.stdout

    def readline(self):
        return self.reader.readline().strip()

    def printf(self, fmt, *args):
        self.writer.write(fmt % args)

def main():
    r = Main()
    s = r.readline()
    sl = list(s)
    r.printf("%c", ord(sl[0]) + 1)

if __name__ == '__main__':
    main()