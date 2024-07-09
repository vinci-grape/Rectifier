import sys

class Main:

    class Solver:
        def __init__(self, sc, writer):
            self.sc = sc
            self.writer = writer

        def run(self):
            n = self.sc.nextInt()
            m = self.sc.nextInt()
            q = self.sc.nextInt()
            a = []
            b = []
            c = []
            d = []
            for i in range(q):
                a.append(self.sc.nextInt())
                b.append(self.sc.nextInt())
                c.append(self.sc.nextInt())
                d.append(self.sc.nextInt())
            self.dfs([1])
            self.writer.println(max)

        def dfs(self, array):
            if len(array) > n:
                score = 0
                for i in range(q):
                    if array[b[i]] - array[a[i]] == c[i]:
                        score += d[i]
                max = max(max, score)
                return
            newArray = []
            for i in range(len(array)):
                newArray.append(array[i])
            newArray.append(array[len(array) - 1])
            while newArray[len(newArray) - 1] <= m:
                self.dfs(newArray)
                newArray[len(newArray) - 1] += 1

    def main(self):
        sc = self.FastScanner()
        writer = self.PrintWriter(sys.stdout)
        try:
            self.Solver(sc, writer).run()
        finally:
            writer.flush()

    # FastScanner
    class FastScanner:
        def __init__(self):
            self.in = sys.stdin
            self.buffer = bytearray()
            self.ptr = 0
            self.buflen = 0

        def hasNextByte(self):
            if self.ptr < self.buflen:
                return True
            else:
                self.ptr = 0
                try:
                    self.buflen = self.in.readinto(self.buffer)
                except:
                    pass
                if self.buflen <= 0:
                    return False
            return True

        def readByte(self):
            if self.hasNextByte():
                return self.buffer[self.ptr]
            else:
                return -1

        def isPrintableChar(self, c):
            return 33 <= c and c <= 126

        def hasNext(self):
            while self.hasNextByte() and not self.isPrintableChar(self.buffer[self.ptr]):
                self.ptr += 1
            return self.hasNextByte()

        def next(self):
            if not self.hasNext():
                raise NoSuchElementException()
            sb = []
            b = self.readByte()
            while self.isPrintableChar(b):
                sb.append(chr(b))
                b = self.readByte()
            return ''.join(sb)

        def nextLong(self):
            if not self.hasNext():
                raise NoSuchElementException()
            n = 0
            minus = False
            b = self.readByte()
            if b == '-':
                minus = True
                b = self.readByte()
            if b < '0' or '9' < b:
                raise NumberFormatException()
            while True:
                if '0' <= b and b <= '9':
                    n *= 10
                    n += b - '0'
                elif b == -1 or not self.isPrintableChar(b):
                    return minus? -n : n
                else:
                    raise NumberFormatException()
                b = self.readByte()

        def nextInt(self):
            nl = self.nextLong()
            if nl < Integer.MIN_VALUE or nl > Integer.MAX_VALUE:
                raise NumberFormatException()
            return int(nl)

        def nextDouble(self):
            return float(self.next())

        def nextIntArray(self, n):
            a = []
            for