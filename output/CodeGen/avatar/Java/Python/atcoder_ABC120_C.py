def main():
    inputStream = sys.stdin
    outputStream = sys.stdout
    in = InputReader(inputStream)
    out = PrintWriter(outputStream)
    solver = TaskB()
    solver.solve(1, in, out)
    out.close()


class TaskB:
    def solve(self, testNumber, in, out):
        x = in.next()
        s = []
        c = 0
        for i in range(len(x)):
            s.append(x[i])
            while len(s) > 2:
                p = s.pop()
                q = s.pop()
                if p == '1' and q == '0':
                    c += 1
                elif p == '0' and q == '1':
                    c += 1
                else:
                    s.append(q)
                    s.append(p)
                    break
        out.println(c * 2)


class InputReader:
    def __init__(self, inStream):
        self.reader = inStream
        self.tokenizer = None

    def next(self):
        if self.tokenizer is None:
            self.tokenizer = self.tokenizer or self.tokenize()
        if not self.tokenizer:
            raise StopIteration
        return self.tokenizer.next()

    def tokenize(self):
        line = self.reader.readline()
        if not line:
            return
        return self.tokenizeLine(line)

    def tokenizeLine(self, line):
        return StringTokenizer(line)

class StringTokenizer:
    def __init__(self, line):
        self.tokens = line.split()
        self.index = 0

    def hasMoreTokens(self):
        return self.index < len(self.tokens)

    def nextToken(self):
        if not self.hasMoreTokens():
            raise StopIteration
        token = self.tokens[self.index]
        self.index += 1
        return token