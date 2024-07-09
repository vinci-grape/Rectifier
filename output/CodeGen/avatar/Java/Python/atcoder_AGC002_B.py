class atcoder_AGC002_B {
    def main(args):
        sc = Scanner(sys.stdin)
        N = sc.nextInt()
        M = sc.nextInt()
        B = [Box(1, True)]
        for i in range(1, N):
            B.append(Box(1, False))
        for i in range(0, M):
            x = sc.nextInt() - 1
            y = sc.nextInt() - 1
            B[x].moveTo(B[y])
        counter = 0
        for b in B:
            if b.red:
                counter += 1
        print(counter)

    class Box:
        def __init__(self, num, red):
            self.num = num
            self.red = red
        def moveTo(self, other):
            if self.num == 0:
                return
            else:
                if self.num == 1:
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

}