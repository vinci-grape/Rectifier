import sys

class SimpleScanner:
    def __init__(self, stream):
        self.stream = stream
        self.buffer = ""
        self.buflen = 0
        self.eof = False

    def read(self):
        if self.buflen <= 0:
            self.buffer = self.stream.read(10240)
            self.buflen = len(self.buffer)
            if self.buflen <= 0:
                self.eof = True
                return chr(0)
        self.buflen -= 1
        return self.buffer[self.buflen]

    def checkEof(self):
        if self.eof:
            raise NoSuchElementException()

    def nextChar(self):
        self.checkEof()
        c = self.read()
        self.checkEof()
        return c

    def next(self):
        self.checkEof()
        while self.buflen > 0 and self.buffer[self.buflen - 1].isspace():
            self.buflen -= 1
        start = self.buflen
        while self.buflen > 0 and not self.buffer[self.buflen - 1].isspace():
            self.buflen -= 1
        return self.buffer[start:self.buflen]

    def nextInt(self):
        return int(self.next())

    def nextLong(self):
        return int(self.next())

    def nextDouble(self):
        return float(self.next())

scanner = SimpleScanner(sys.stdin)
writer = sys.stdout
r = scanner.nextInt()
d = scanner.nextInt()
x = scanner.nextLong()
for i in range(10):
    x = r * x - d
    writer.write(str(x) + "\n")
writer.close()