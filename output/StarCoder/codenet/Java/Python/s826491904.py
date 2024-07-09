import sys

class Main:
    #-------------------------------------------------------------#
    def __init__(self):
        self.sc = sys.stdin
    #-------------------------------------------------------------#
    def solve(self):
        N = int(self.sc.readline())
        max, min = int(self.sc.readline()), int(self.sc.readline())
        for i in range(1, N):
            in_ = int(self.sc.readline())
            max = max if max > in_ else in_
            min = min if min < in_ else in_
        print(max - min)

if __name__ == "__main__":
    Main().solve()