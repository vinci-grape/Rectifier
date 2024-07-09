import sys

class FastScanner:
    def __init__(self):
        self.br = BufferedReader(InputStreamReader(sys.stdin))
        self.st = StringTokenizer("")

    def next(self):
        while not self.st.hasMoreTokens():
            try:
                self.st = StringTokenizer(self.br.readLine())
            except IOException as e:
                e.printStackTrace()
        return self.st.nextToken()

    def nextInt(self):
        return int(self.next())

    def nextLong(self):
        return long(self.next())

    def nextDouble(self):
        return double(self.next())

    def nextLine(self):
        return self.br.readLine()

if __name__ == "__main__":
    input = FastScanner()
    n = input.nextInt()
    map = HashMap()
    for i in range(n):
        val = input.nextInt()
        map.put(val, map.getOrDefault(val, 0) + 1)
    max = Integer.MIN_VALUE
    for entry in map.entrySet():
        value = entry.getValue()
        max = Math.max(max, value)
    print(max + "" + map.size())