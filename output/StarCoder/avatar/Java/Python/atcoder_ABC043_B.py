import sys

class LightScanner:
    def __init__(self, stream):
        self.reader = stream.readline

    def string(self):
        return self.reader().rstrip()

class BUnhappyHackingABCEdit:
    def __init__(self):
        pass

    def solve(self, testNumber, in, out):
        s = in.string()
        d = ""
        for c in s:
            if c == '0':
                d += '0'
            elif c == '1':
                d += '1'
            elif c == 'B':
                if len(d) > 0:
                    d = d[:-1]
        out.println(d)

if __name__ == '__main__':
    solver = BUnhappyHackingABCEdit()
    solver.solve(1, LightScanner(sys.stdin), sys.stdout)