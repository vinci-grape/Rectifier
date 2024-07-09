import sys

class Main:
    def __init__(self):
        self.constraints = []
        self.N = 0
        self.result = 0
        self.calc()

    def calc(self):
        min_val = sys.maxsize
        for i in range(5):
            c = int(input())
            self.constraints.append(c)
            min_val = min(min_val, c)
        
        time = self.N // min_val
        if self.N % min_val != 0:
            time += 1
        time += 4
        self.result = time

if __name__ == "__main__":
    ins = Main()
    print(ins.result)