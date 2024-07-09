import sys

class SimpleScanner:
    def __init__(self, file):
        self.file = file
        self.buffer = ''
        self.eof = False
    
    def read(self):
        if len(self.buffer) == 0:
            self.buffer = self.file.readline().strip().split()
            if len(self.buffer) == 0:
                self.eof = True
                return ''
        return self.buffer.pop(0)
    
    def check_eof(self):
        if self.eof:
            raise ValueError('No more elements to read.')
    
    def next_char(self):
        self.check_eof()
        char = self.read()
        self.check_eof()
        return char
    
    def next(self):
        char = self.read()
        while char.isspace():
            char = self.read()
        word = char
        char = self.read()
        while not self.eof and not char.isspace():
            word += char
            char = self.read()
        return word
    
    def next_int(self):
        return int(self.next())
    
    def next_long(self):
        return int(self.next())
    
    def next_double(self):
        return float(self.next())

def main():
    r = scanner.next_int()
    d = scanner.next_int()
    x = scanner.next_long()
    for _ in range(10):
        x = r * x - d
        print(x)

scanner = SimpleScanner(sys.stdin)
main()