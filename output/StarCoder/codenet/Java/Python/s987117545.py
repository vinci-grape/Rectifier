import sys

class Main:
    def __init__(self):
        self.sc = sys.stdin
        self.DEVISOR = 1000000000+7

    def run(self):
        n = int(self.sc.readline())
        k = int(self.sc.readline())

        ans = 0
        for i in range(k, n+1):
            max = i*(2*n-i+1)/2
            min = i*(i-1)/2
            ans += (max - min + 1) % self.DEVISOR

        print(ans % self.DEVISOR)

if __name__ == '__main__':
    obj = Main()
    obj.run()