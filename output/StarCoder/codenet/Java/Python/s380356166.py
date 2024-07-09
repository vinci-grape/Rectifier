import sys

class Solver:
    def solve(self, testNumber, in, out):
        K = in.nextInt()
        S = in.nextInt()
        ans = 0
        for x in range(K+1):
            for y in range(K+1):
                wk = S - x - y
                if wk >= 0 and wk <= K:
                    ans += 1
        out.println(ans)

class MyInput:
    def __init__(self, stream):
        self.stream = stream
        self.buffer = ""
        self.pos = 0
        self.readLen = 0
        self.isDigit = [False] * 256
        self.isSpace = [False] * 256
        self.isLineSep = [False] * 256
        for i in range(10):
            self.isDigit[i + ord('0')] = True
        self.isDigit[ord('-')] = True
        self.isSpace[ord(' ')] = self.isSpace[ord('\r')] = self.isSpace[ord('\n')] = self.isSpace[ord('\t')] = True
        self.isLineSep[ord('\r')] = self.isLineSep[ord('\n')] = True

    def read(self):
        if self.pos >= self.readLen:
            self.pos = 0
            self.readLen = self.stream.read(self.buffer)
            if self.readLen <= 0:
                raise Exception("EOF")
        ret = self.buffer[self.pos]
        self.pos += 1
        return ret

    def nextInt(self):
        ret = 0
        sign = 1
        while True:
            c = self.read()
            if c =='':
                continue
            if c == '\r' or c == '\n':
                continue
            if c == '-':
                sign = -1
                continue
            if not self.isDigit[ord(c)]:
                raise Exception("not digit")
            ret = ret * 10 + ord(c) - ord('0')
            break
        return sign * ret

    def nextLong(self):
        ret = 0
        sign = 1
        while True:
            c = self.read()
            if c =='':
                continue
            if c == '\r' or c == '\n':
                continue
            if c == '-':
                sign = -1
                continue
            if not self.isDigit[ord(c)]:
                raise