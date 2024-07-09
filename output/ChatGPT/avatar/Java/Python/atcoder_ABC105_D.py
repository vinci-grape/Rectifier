import sys
from collections import defaultdict

class InputReader:
    def __init__(self, stream):
        self.stream = stream
        self.tokenizer = None
    
    def nextString(self):
        while not self.tokenizer or not self.tokenizer.hasMoreTokens():
            self.tokenizer = iter(next(self.stream).split())
        return next(self.tokenizer)
    
    def nextInt(self):
        return int(self.nextString())
    
    def nextIntArray(self, n):
        return [self.nextInt() for _ in range(n)]

class TaskD:
    def solve(self, in_stream, out_stream):
        n = in_stream.nextInt()
        m = in_stream.nextInt()
        a = in_stream.nextIntArray(n)
        dp = defaultdict(int)
        ans = 0
        base = 0
        for i in range(n):
            base = (base - a[i] % m + m) % m
            dp[(base + a[i]) % m] += 1
            ans += dp[base]
        out_stream.write(str(ans) + '\n')

def main():
    in_stream = InputReader(sys.stdin.buffer)
    out_stream = sys.stdout.buffer
    solver = TaskD()
    solver.solve(in_stream, out_stream)

if __name__ == "__main__":
    main()