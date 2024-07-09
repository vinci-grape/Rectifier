import heapq
import sys

class MyScanner:
    BUFFER_SIZE = 8192

    def __init__(self, stream=sys.stdin):
        self.stream = stream
        self.buffer = bytearray(MyScanner.BUFFER_SIZE)
        self.pointer = 0
        self.buffer_length = 0

    def read_byte(self):
        if self.pointer < self.buffer_length:
            result = self.buffer[self.pointer]
            self.pointer += 1
            return result
        try:
            self.buffer_length = self.stream.readinto(self.buffer)
        except IOError as e:
            raise AssertionError(None, e)
        if self.buffer_length == -1:
            return -1
        self.pointer = 1
        return self.buffer[0]

    @staticmethod
    def is_printable_char_except_space(c):
        return 33 <= c <= 126

    def next(self):
        c = self.read_byte()
        while not (c == -1 or MyScanner.is_printable_char_except_space(c)):
            c = self.read_byte()
        if c == -1:
            raise StopIteration()
        b = bytearray()
        while c != -1 and MyScanner.is_printable_char_except_space(c):
            b.append(c)
            c = self.read_byte()
        return b.decode()

    def next_int(self):
        n = self.next()
        return int(n)

    def next_long(self):
        n = self.next()
        return int(n)

    def next_double(self):
        n = self.next()
        return float(n)

    def next_char(self):
        c = self.read_byte()
        while not (c == -1 or MyScanner.is_printable_char_except_space(c)):
            c = self.read_byte()
        if c == -1:
            raise StopIteration()
        return chr(c)

    def next_int_array(self, n):
        return [self.next_int() for _ in range(n)]

    def next_long_array(self, n):
        return [self.next_long() for _ in range(n)]

    def next_char_array(self, n):
        return [self.next_char() for _ in range(n)]

class MyWriter:
    def __init__(self, stream=sys.stdout):
        self.stream = stream

    def join_and_println(self, x, delimiter=' '):
        if len(x) > 0:
            self.stream.write(str(x[0]))
            for i in range(1, len(x)):
                self.stream.write(delimiter + str(x[i]))
        self.stream.write('\n')
        self.stream.flush()

def main():
    out = MyWriter()

    sc = MyScanner()
    N = sc.next_int()
    M = sc.next_int()
    list = [[] for _ in range(100001)]

    for _ in range(N):
        a = sc.next_int()
        b = sc.next_int()
        list[a].append(b)

    res = 0
    pqueue = []
    for i in range(1, M+1):
        if list[i]:
            pqueue.extend(list[i])
        if pqueue:
            res += heapq.heappop(pqueue)

    out.join_and_println(res)

if __name__ == '__main__':
    main()