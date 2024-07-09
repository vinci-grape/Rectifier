import sys

class IntegralRect:
    def __init__(self, h, w):
        self.height = h
        self.width = w

    def diagonal(self):
        if self.height >= self.width:
            return sys.maxsize
        return self.height * self.height + self.width * self.width

    def __lt__(self, other):
        d1 = self.diagonal()
        d2 = other.diagonal()
        return d1 == d2 and self.height < other.height or d1 < d2


if __name__ == '__main__':
    rects = []
    for i in range(1, 201):
        for j in range(1, 201):
            rects.append(IntegralRect(i, j))
    rects.sort()

    while True:
        h, w = map(int, input().split())
        if h == 0 and w == 0:
            break
        rect = IntegralRect(h, w)
        diag = rect.diagonal()
        for r in rects:
            if r.diagonal() > diag:
                print(r.height, r.width)
                break