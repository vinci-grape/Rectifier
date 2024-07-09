import sys

class FastReader:
    def __init__(self):
        self.val = sys.stdin.readline().rstrip()
        self.idx = 0

    def next(self):
        while self.idx < len(self.val):
            c = self.val[self.idx]
            self.idx += 1
            if c!='':
                return c

    def nextInt(self):
        num = 0
        c = self.next()
        while c!= None and c.isdigit():
            num = num * 10 + int(c)
            c = self.next()
        return num

scan = FastReader()
t = scan.nextInt()
for _ in range(t):
    n = scan.nextInt()
    arr = [scan.nextInt() for _ in range(n)]
    prevWinner = 0
    for i in range(n):
        if arr[i] == 1:
            if prevWinner == 0:
                prevWinner = 2
            else:
                if (arr[i] - 1) % 2 == 0:
                    print(2)
                    prevWinner = 2
                else:
                    print(1)
                    prevWinner = 1
        else:
            if prevWinner == 0:
                prevWinner = 1
            else:
                if (arr[i] - 1) % 2 == 0:
                    print(1)
                    prevWinner = 1
                else:
                    print(2)
                    prevWinner = 2