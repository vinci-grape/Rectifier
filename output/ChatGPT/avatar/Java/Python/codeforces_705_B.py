import sys

class FastReader:
    def __init__(self):
        self.buffer = sys.stdin.readlines()
        self.pointer = 0

    def next(self):
        words = self.buffer[self.pointer].strip().split()
        self.pointer += 1
        return words.pop(0)

    def nextInt(self):
        return int(self.next())

    def nextLong(self):
        return int(self.next())

    def nextDouble(self):
        return float(self.next())

    def nextLine(self):
        return self.buffer[self.pointer].strip()

def main():
    t = 1
    while t > 0:
        solve()
        t -= 1

def solve():
    t = scan.nextInt()
    arr = [0] * t
    for i in range(t):
        arr[i] = scan.nextInt()

    prevWinner = 0
    for i in range(t):
        if arr[i] == 1:
            if prevWinner == 0:
                prevWinner = 2

        if prevWinner == 2 or prevWinner == 0:
            if (arr[i] - 1) % 2 == 0:
                print(2)
                prevWinner = 2
            else:
                print(1)
                prevWinner = 1
        else:
            if (arr[i] - 1) % 2 == 0:
                print(1)
                prevWinner = 1
            else:
                print(2)
                prevWinner = 2

scan = FastReader()
main()