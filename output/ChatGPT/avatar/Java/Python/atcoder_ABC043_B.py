class BUnhappyHackingABCEdit:
    def solve(self, testNumber, in, out):
        s = in.string()
        d = []
        for c in s:
            if c == '0':
                d.append('0')
            elif c == '1':
                d.append('1')
            elif c == 'B':
                if len(d) > 0:
                    d.pop()
        out.println(''.join(d))

class LightScanner:
    def __init__(self, in):
        self.reader = in
        self.tokenizer = None
    
    def string(self):
        if self.tokenizer == None or not self.tokenizer.hasMoreTokens():
            try:
                self.tokenizer = self.reader.readline().split()
            except:
                raise
        return self.tokenizer.pop(0)

s = input()
solver = BUnhappyHackingABCEdit()
solver.solve(1, LightScanner(s), print)