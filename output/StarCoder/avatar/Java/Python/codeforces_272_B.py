import sys

class FastReader:
    def __init__(self):
        self.buf = sys.stdin.buffer
        self.bufferedReader = io.BufferedReader(self.buf)
        self.tokenizer = None

    def readline(self):
        if self.tokenizer == None:
            self.tokenizer = io.StringIO(self.bufferedReader.readline().decode())
        return self.tokenizer.readline()

    def read(self):
        if self.tokenizer == None:
            self.tokenizer = io.StringIO(self.bufferedReader.read().decode())
        return self.tokenizer.read()

    def nextInt(self):
        return int(self.readline())

    def nextLong(self):
        return int(self.readline())

    def nextDouble(self):
        return float(self.readline())

def rec(x):
    answer = 0
    for k in range(31, -1, -1):
        if (x & (1 << k))!= 0:
            answer += 1
    return answer

if __name__ == '__main__':
    fastReader = FastReader()
    n = fastReader.readInt()
    a = [0] * 33
    for i in range(n):
        a[rec(fastReader.readInt())] += 1
    answer = 0
    for i in range(33):
        summ = (1 + a[i] - 1) / 2.0 * (a[i] - 1)
        answer += summ
    print(int(answer))