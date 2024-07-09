class Main:
    def solve(self):
        for i in range(7):
            high = int(input())
            low = int(input())
            sa = high - low
            print(sa)

obj = Main()
obj.solve()