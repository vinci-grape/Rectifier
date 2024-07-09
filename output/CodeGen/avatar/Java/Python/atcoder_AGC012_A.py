class atcoder_AGC012_A:
    def main(self, args):
        sc = Scanner(System.in)
        n = sc.nextInt()
        array = [sc.nextInt() for _ in range(3 * n)]
        array.sort()
        head = len(array) - 2
        res = 0
        for i in range(n):
            res += array[head]
            head -= 2
        print(res)