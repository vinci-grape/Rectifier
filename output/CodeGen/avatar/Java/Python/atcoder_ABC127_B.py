class atcoder_ABC127_B {
    def main(args):
        r = int(input())
        d = int(input())
        x = long(input())
        for i in range(10):
            x = r * x - d
            print(x)
        print()

    def checkEof(self):
        if self.eof:
            raise NoSuchElementException()

    def read(self):
        if not self.buffer.hasRemaining():
            self.buffer.clear()
            try:
                self.buffer.limit(self.in.read(self.buffer))
            except IOError:
                self.buffer.limit(0)
                self.eof = True
            self.buffer.flip()
        return self.buffer.get()

    def next(self):
        char = self.read()
        while Character.isWhitespace(char):
            char = self.read()
        if char == ' ':
            self.eof = True
            return ''
        return char

    def nextInt(self):
        return int(self.next())

    def nextLong(self):
        return long(self.next())

    def nextDouble(self):
        return float(self.next())
}




public class atcoder_ABC127_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        PrintWriter writer = new PrintWriter(System.out);
        int r = scanner.nextInt();
        int d = scanner.nextInt();
        long x = scanner.nextLong();
        for (int i = 0; i < 10; ++i) {
            x = r * x - d;
            writer.println(x);
        }
        writer.close();
    }
}