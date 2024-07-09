def main():
    input = input()
    n = input()
    map = {}
    for i in range(n):
        val = input()
        map[val] = map.get(val, 0) + 1
    max = -1
    for key, value in map.items():
        max = max if max > value else value
    print(max)
    print(len(map))


class FastScanner:
    def __init__(self):
        self.st = []
        self.br = input()

    def next(self):
        while not self.st:
            try:
                self.st = [x.strip() for x in self.br.readline().split()]
            except IOError:
                self.st = []
        return self.st.pop(0)

    def nextInt(self):
        return int(self.next())

    def nextLong(self):
        return long(self.next())

    def nextDouble(self):
        return float(self.next())

    def nextLine(self):
        return self.br.readline()


if __name__ == "__main__":
    main()