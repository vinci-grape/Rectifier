class Solver:
    def __init__(self, sc, writer):
        self.sc = sc
        self.writer = writer

    def run(self):
        self.n = self.sc.nextInt()
        self.m = self.sc.nextInt()
        self.q = self.sc.nextInt()
        self.a = [0] * self.q
        self.b = [0] * self.q
        self.c = [0] * self.q
        self.d = [0] * self.q
        for i in range(self.q):
            self.a[i] = self.sc.nextInt()
            self.b[i] = self.sc.nextInt()
            self.c[i] = self.sc.nextInt()
            self.d[i] = self.sc.nextInt()
        self.dfs([1])
        self.writer.println(self.max)

    def dfs(self, array):
        if len(array) > self.n:
            score = 0
            for i in range(self.q):
                if array[self.b[i]] - array[self.a[i]] == self.c[i]:
                    score += self.d[i]
            self.max = max(self.max, score)
            return

        new_array = array[:]
        new_array.append(array[-1])

        while new_array[-1] <= self.m:
            self.dfs(new_array)
            new_array[-1] += 1

class FastScanner:
    def __init__(self):
        self.in_stream = sys.stdin.buffer
        self.buffer = bytearray()
        self.ptr = 0
        self.buflen = 0

    def hasNextByte(self):
        if self.ptr < self.buflen:
            return True
        else:
            self.ptr = 0
            try:
                self.buflen = self.in_stream.readinto(self.buffer)
            except IOError:
                e.printStackTrace()
            if self.buflen <= 0:
                return False
        return True

    def readByte(self):
        if self.hasNextByte():
            self.ptr += 1
            return self.buffer[self.ptr - 1]
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
        if b == ord('-'):
            minus = True
            b = self.readByte()
        if b < ord('0') or b > ord('9'):
            raise NumberFormatException()
        while True:
            if ord('0') <= b and b <= ord('9'):
                n *= 10
                n += b - ord('0')
            elif b == -1 or not self.isPrintableChar(b):
                return -n if minus else n
            else:
                raise NumberFormatException()
            b = self.readByte()

    def nextInt(self):
        nl = self.nextLong()
        if nl < -2147483648 or nl > 2147483647:
            raise NumberFormatException()
        return int(nl)

    def nextDouble(self):
        return float(self.next())

    def nextIntArray(self, n):
        return [self.nextInt() for _ in range(n)]

    def nextLongArray(self, n):
        return [self.nextLong() for _ in range(n)]

def main(args):
    sc = FastScanner()
    w = PrintWriter()
    solver = Solver(sc, w)
    solver.run()
    w.flush()

if __name__ == "__main__":
    main(sys.argv[1:])