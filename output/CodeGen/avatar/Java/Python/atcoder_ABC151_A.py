def main ():
    r = BufferedReader(InputStreamReader(System.in), 1)
    s = r.readline()
    print(chr(ord(s[0]) + 1))

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
        return (a * inv(b)) % self.module

    def inv(self, a):
        b = self.module
        u = 1
        v = 0
        while b > 0:
            t = a / b
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



# Ref: https://www.youtube.com/watch?v=QJ9Zg8uGn-U