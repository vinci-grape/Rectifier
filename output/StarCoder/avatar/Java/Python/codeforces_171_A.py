import sys

class FastReader:
    def __init__(self):
        self.buf = sys.stdin.buffer
        self.bufferedReader = io.BufferedReader(self.buf)
        self.tokenizer = None

    def readline(self):
        if self.tokenizer is None:
            self.tokenizer = io.StringIO(self.bufferedReader.readline().decode())
        return self.tokenizer.readline()

    def read(self):
        if self.tokenizer is None:
            self.tokenizer = io.StringIO(self.bufferedReader.read().decode())
        return self.tokenizer.read()

    def next(self):
        if self.tokenizer is None:
            self.tokenizer = io.StringIO(self.bufferedReader.readline().decode())
        return self.tokenizer.__next__()

    def nextLine(self):
        return self.bufferedReader.readline().decode()

    def nextInt(self):
        if self.tokenizer is None:
            self.tokenizer = io.StringIO(self.bufferedReader.readline().decode())
        return int(self.tokenizer.__next__())

    def nextLong(self):
        if self.tokenizer is None:
            self.tokenizer = io.StringIO(self.bufferedReader.readline().decode())
        return int(self.tokenizer.__next__())

    def nextDouble(self):
        if self.tokenizer is None:
            self.tokenizer = io.StringIO(self.bufferedReader.readline().decode())
        return float(self.tokenizer.__next__())

def main():
    reader = FastReader()
    n = reader.nextInt()
    m = reader.nextInt()
    t = reverse(m)
    print(t + n)

def reverse(n):
    if n < 10:
        return n * 10
    t = n
    r = 0
    while t > 0:
        r = (r * 10) + t % 10
        t = t // 10
    return r

if __name__ == '__main__':
    main()