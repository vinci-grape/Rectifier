class Box:
    def __init__(self, n, r):
        self.num = n
        self.red = r
    
    def move_to(self, other):
        if self.num == 0:
            return
        elif self.num == 1:
            self.num = 0
            other.num += 1
            if self.red:
                other.red = True
            self.red = False
        else:
            self.num -= 1
            other.num += 1
            if self.red:
                other.red = True

N, M = map(int, input().split())
B = [Box(1, True)] + [Box(1, False) for _ in range(N-1)]

for _ in range(M):
    x, y = map(int, input().split())
    B[x-1].move_to(B[y-1])

counter = sum(b.red for b in B)
print(counter)
#End of code