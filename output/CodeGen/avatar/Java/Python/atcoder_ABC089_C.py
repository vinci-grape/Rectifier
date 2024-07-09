def main():
    inputStream = sys.stdin
    outputStream = sys.stdout
    in = sys.stdin.buffer.raw
    out = sys.stdout.buffer
    solver = TaskC()
    solver.solve(1, in, out)
    out.flush()


class TaskC:
    def __init__(self):
        self.cnt = [0, 0, 0, 0, 0]

    def solve(self, testNumber, in, out):
        n = int(in.readline())
        for i in range(n):
            str = in.readline()
            if str[0] == 'M':
                self.cnt[0] += 1
            elif str[0] == 'A':
                self.cnt[1] += 1
            elif str[0] == 'R':
                self.cnt[2] += 1
            elif str[0] == 'C':
                self.cnt[3] += 1
            elif str[0] == 'H':
                self.cnt[4] += 1
        res = self.cnt[0] * self.cnt[1] * self.cnt[2] + self.cnt[0] * self.cnt[1] * self.cnt[3] + self.cnt[0] * self.cnt[1] * self.cnt[4] + self.cnt[0] * self.cnt[2] * self.cnt[3] + self.cnt[0] * self.cnt[2] * self.cnt[4] + self.cnt[0] * self.cnt[3] * self.cnt[4] + self.cnt[1] * self.cnt[2] * self.cnt[3] + self.cnt[1] * self.cnt[2] * self.cnt[4] + self.cnt[1] * self.cnt[3] * self.cnt[4] + self.cnt[2] * self.cnt[3] * self.cnt[4]
        out.write(str(res))
        out.flush()


if __name__ == "__main__":
    main()