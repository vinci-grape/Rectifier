import sys

class FastReader:
    def __init__(self):
        self.buf = sys.stdin.buffer
        self.lines = sys.stdin.buffer
        self.chunks = []
        self.pos = 0
        self.pend = 0

    def readline(self):
        while self.pend <= self.pos:
            self.chunks.append(self.buf.readline().decode('ascii'))
            self.pend = self.pend + len(self.chunks[-1])
        line = self.chunks[self.pos]
        self.pos = self.pos + 1
        return line

    def read(self):
        while self.pend <= self.pos:
            self.chunks.append(self.buf.readline().decode('ascii'))
            self.pend = self.pend + len(self.chunks[-1])
        line = self.chunks[self.pos]
        self.pos = self.pos + 1
        return line

    def next_int(self):
        i = 0
        c = self.read()
        while c =='':
            c = self.read()
        if c == '-':
            sign = -1
            c = self.read()
        else:
            sign = 1
        while c!='':
            i = i * 10 + ord(c) - ord('0')
            c = self.read()
        return sign * i

    def next_long(self):
        i = 0
        c = self.read()
        while c =='':
            c = self.read()
        if c == '-':
            sign = -1
            c = self.read()
        else:
            sign = 1
        while c!='':
            i = i * 10 + ord(c) - ord('0')
            c = self.read()
        return sign * i

    def next_double(self):
        i = 0
        c = self.read()
        while c =='':
            c = self.read()
        if c == '-':
            sign = -1
            c = self.read()
        else:
            sign = 1
        while c!='':
            i = i * 10 + ord(c) - ord('0')
            c = self.read()
        return sign * i

    def next_str(self):
        s = ''
        c = self.read()
        while c =='':
            c = self.read()
        while c!='':
            s = s + c
            c = self.read()
        return s


class TreeSet:
    def __init__(self):
        self.tree = []

    def add(self, x):
        self.tree.append(x)

    def remove(self, x):
        self.tree.remove(x)

    def ceiling(self, x):
        if len(self.tree) == 0:
            return None
        l = 0
        r = len(self.tree) - 1
        while l < r:
            m = (l + r) // 2
            if self.tree[m] <= x:
                l = m + 1
            else:
                r = m
        if self.tree[l] <= x:
            return self.tree[l]
        else:
            return None


if __name__ == '__main__':
    reader = FastReader()
    n = reader.next_int()
    left = TreeSet()
    for i in range(n):
        left.add(i)
    q = reader.next_int()
    while q > 0:
        l = reader.next_int() - 1
        r = reader.next_int() - 1
        win = reader.next_int()
        while left.ceiling(l)!= None and left.ceiling(l) <= r:
            curr = left.ceiling(l)
            left.remove(curr)
            answer[curr] = win
            left.add(win - 1)
        answer[win - 1] = 0
        q -= 1
    ans = ''
    for i in range(n):
        ans += str(answer[i])
    print(ans)