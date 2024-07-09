import sys


class FastReader:
    def __init__(self):
        self.input = sys.stdin.readline()
        self.pointer = 0

    def next(self):
        while self.pointer >= len(self.input) or self.input[self.pointer] == ' ' or self.input[self.pointer] == '\n':
            if self.pointer >= len(self.input):
                self.input = sys.stdin.readline()
                self.pointer = 0
            else:
                self.pointer += 1
        start = self.pointer
        while self.pointer < len(self.input) and self.input[self.pointer] != ' ' and self.input[self.pointer] != '\n':
            self.pointer += 1
        return self.input[start:self.pointer]

    def nextInt(self):
        return int(self.next())

    def nextLong(self):
        return int(self.next())

    def nextDouble(self):
        return float(self.next())

    def nextLine(self):
        start = self.pointer
        while self.pointer < len(self.input) and self.input[self.pointer] != '\n':
            self.pointer += 1
        self.pointer += 1
        return self.input[start:self.pointer - 1]


def reverse(n):
    if n < 10:
        return n * 10
    t = n
    r = 0
    while t > 0:
        r = (r * 10) + t % 10
        t = t // 10
    return r


def main():
    sc = FastReader()
    n = sc.nextInt()
    m = sc.nextInt()
    t = reverse(m)
    print(t + n)


if __name__ == "__main__":
    main()