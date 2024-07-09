import sys


class FastReader:
    def __init__(self):
        self.input = sys.stdin.readline()
        self.tokens = self.input.split()
        self.index = 0

    def next(self):
        current = self.tokens[self.index]
        self.index += 1
        return current

    def next_int(self):
        return int(self.next())

    def next_long(self):
        return int(self.next())

    def next_double(self):
        return float(self.next())

    def next_line(self):
        return sys.stdin.readline()


def main():
    in_ = FastReader()
    n = in_.next_int()
    left = set(range(n))
    answer = [0] * n

    q = in_.next_int()
    while q > 0:
        l = in_.next_int() - 1
        r = in_.next_int() - 1
        win = in_.next_int()

        while l <= min(r, n-1) and l in left:
            answer[l] = win
            left.remove(l)
            l += 1

        answer[win - 1] = 0
        left.add(win - 1)
        q -= 1

    ans = ""
    for i in range(n):
        ans += str(answer[i])

    print(ans)


if __name__ == "__main__":
    main()