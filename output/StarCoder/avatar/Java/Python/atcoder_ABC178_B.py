import math

class FastReader:
    def __init__(self):
        self.val = input()
        self.pos = 0

    def next(self):
        self.pos += 1
        return self.val[self.pos - 1]

    def nextInt(self):
        return int(self.next())

    def nextLong(self):
        return int(self.next())

    def nextDouble(self):
        return float(self.next())

    def nextLine(self):
        self.val = input()
        self.pos = 0
        return self.val


def modPower(x, y, mod):
    res = 1
    x %= mod
    if x == 0:
        return 0
    while y > 0:
        if y % 2 == 1:
            res = (res * x) % mod
        y = y >> 1
        x = (x * x) % mod
    return res


class pair:
    def __init__(self, first, second):
        self.first = first
        self.second = second


if __name__ == '__main__':
    in_ = FastReader()
    a = [0] * 4
    for i in range(4):
        a[i] = in_.nextLong()
    print(max(a[0] * a[2], max(a[1] * a[3], max(a[0] * a[3], a[1] * a[2]))))