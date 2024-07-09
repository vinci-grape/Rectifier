import sys
import collections

def main():
    out = MyWriter(sys.stdout)
    sc = MyScanner(sys.stdin)
    N = sc.nextInt()
    M = sc.nextInt()
    list = [None] * 100001
    for i in range(N):
        a = sc.nextInt()
        b = sc.nextInt()
        if list[a] is None:
            list[a] = collections.deque()
        list[a].append(b)
    res = 0
    pqueue = collections.deque()
    for i in range(1, M + 1):
        if list[i] is not None:
            pqueue.extend(list[i])
        if pqueue:
            res += pqueue.popleft()
    out.println(res)
    out.flush()

class MyWriter:
    def __init__(self, out):
        self.out = out

    def println(self, x):
        self.out.write(str(x) + "\n")

    def joinAndPrintln(self, x):
        self.joinAndPrintln(x, " ")

    def joinAndPrintln(self, x, delimiter):
        self.out.write(delimiter.join(map(str, x)) + "\n")

    def flush(self):
        self.out.flush()

class MyScanner:
    def __init__(self, inp):
        self.inp = inp
        self.buffer = []

    def next(self):
        while True:
            if self.buffer:
                return self.buffer.pop(0)
            line = self.inp.readline()
            if not line:
                return None
            for c in line.strip():
                self.buffer.append(c)

    def nextInt(self):
        while True:
            c = self.next()
            if c is None:
                return None
            if c == '-':
                sign = -1
                continue
            if '0' <= c <= '9':
                break
        result = 0
        while True:
            if c is None:
                return None
            if '0' <= c <= '9':
                result = result * 10 + ord(c) - ord('0')
                c = self.next()
                continue
            return result * sign

    def nextLong(self):
        while True:
            c = self.next()
            if c is None:
                return None
            if c == '-':
                sign = -1
                continue
            if '0' <= c <= '9':
                break
        result = 0
        while True:
            if c is None:
                return None
            if '0' <= c <= '9':
                result = result * 10 + ord(c) - ord('0')
                c = self.next()
                continue
            return result * sign

    def nextIntArray(self, n):
        return [self.nextInt() for i in range(n)]

    def nextLongArray(self, n):
        return [self.nextLong() for i in range(n)]

    def nextVerticalIntArrays(self, n, m):
        a = [self.nextIntArray(n) for i in range(m)]
        b = [self.nextIntArray(n) for i in range(m)]
        return a, b

    def nextVerticalLongArrays(self, n, m):
        a = [self.nextLongArray(n) for i in range(m)]
        b = [self.nextLongArray(n) for i in range(m)]
        return a, b

    def nextVerticalCharArrays(self, n, m):
        a = [self.nextCharArray(n) for i in range(m)]
        b = [self.nextCharArray(n) for i in range(m)]
        return a, b

    def nextChar(self):
        while True:
            c = self.next()
            if c is None:
                return None
            if 'a' <= c <= 'z' or 'A' <= c <= 'Z' or c == '-':
                break
        return c

    def nextCharArray(self, n):
        return [self.nextChar() for i in range(n)]

    def nextVerticalCharArrays(self, n, m):
        a = [self.nextCharArray(n) for i in range(m)]
        b = [self.nextCharArray(n) for i in range(m)]
        return a, b

    def nextLine(self):
        while True:
            c = self.next()
            if c is None:
                return None
            if c == '\n':
                return ''
            if c == '\r':
                continue
            break
        while True:
            c = self.next()
            if c is None:
                return None
            if c == '\n':
                return ''
            if c == '\r':
                continue
            break
        return self.next()

    def nextLineArray(self, n):
        return [self.nextLine() for i in range(n)]

    def nextVerticalLineArrays(self, n, m):
        a = [self.nextLineArray(n) for i in range(m)]
        b = [self.nextLineArray(n) for i in range(m)]
        return a, b

    def nextDouble(self):
        while True:
            c = self.next()
            if c is None:
                return None
            if c == '-':
                sign = -1
                continue
            if '0' <= c <= '9':
                break
        result = 0
        while True:
            if c is None:
                return None
            if '0' <= c <= '9':
                result = result * 10 + ord(c) - ord('0')
                c = self.next()
                continue
            if c == '.':
                break
            return result * sign
        while True:
            if c is None:
                return None
            if '0' <= c <= '9':
                result = result * 10 + ord(c) - ord('0')
                c = self.next()
                continue
            return result * sign

    def nextDoubleArray(self, n):
        return [self.nextDouble() for i in range(n)]

    def nextVerticalDoubleArrays(self, n, m):
        a = [self.nextDoubleArray(n) for i in range(m)]
        b = [self.nextDoubleArray(n) for i in range(m)]
        return a, b

    def nextVerticalIntArrays(self, n, m):
        a = [self.nextIntArray(n) for i in range(m)]
        b = [self.nextIntArray(n) for i in range(m)]
        return a, b

    def nextVerticalLongArrays(self, n, m):
        a = [self.nextLongArray(n) for i in range(m)]
        b = [self.nextLongArray(n) for i in range(m)]
        return a, b

    def nextVerticalCharArrays(self, n, m):
        a = [self.nextCharArray(n) for i in range(m)]
        b = [self.nextCharArray(n) for i in range(m)]
        return a, b

    def nextVerticalLineArrays(self, n, m):
        a = [self.nextLineArray(n) for i in range(m)]
        b = [self.nextLineArray(n) for i in range(m)]
        return a, b

    def nextVerticalDoubleArrays(self, n, m):
        a = [self.nextDoubleArray(n) for i in range(m)]
        b = [self.nextDoubleArray(n) for i in range(m