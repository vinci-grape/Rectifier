class Main:
    def main(self, args):
        sc = Scanner(System.in)
        t = sc.nextInt()
        count = [0] * (t + 1)
        for i in range(2, t + 1):
            count[sc.nextInt()] += 1
        for i in range(1, t + 1):
            print(count[i])