import sys
import heapq

class Main:

    def __init__(self, in_, out_, test):
        self.in_ = in_
        self.out_ = out_
        self.test = test
        self.run()

    def run(self):
        N = self.in_.next_int()
        A = [0] * N
        for i in range(N):
            A[i] = self.in_.next_int()
        A.sort()

        res = 0

        q = []
        heapq.heappush(q, [A[N - 1], A[N - 1]])

        for i in range(N - 2, -1, -1):
            a = A[i]
            place = heapq.heappop(q)
            res += min(place[0], place[1])
            heapq.heappush(q, [place[0], a])
            heapq.heappush(q, [a, place[1]])
        self.out_.print(res)


if __name__ == "__main__":
    in_ = FastScanner(sys.stdin)
    out_ = PrintWriter(sys.stdout)
    test = 1
    solution = Main(in_, out_, test)