import sys

class Main:
    #Don't have to see. start------------------------------------------
    def __init__(self):
        self.inputIterator = self.InputIterator()
        self.out = sys.stdout
        self.err = sys.stderr
        self.CONVSTR = {8:" ", 9:"\n", 0:""}
    def InputIterator(self):
        self.inputLine = []
        self.index = 0
        self.max = 0
        self.read = ""
        for read in sys.stdin:
            self.inputLine.append(read)
            self.max += 1
        return self
    def hasNext(self):
        return self.index < self.max
    def next(self):
        if(self.hasNext()):
            self.index += 1
            return self.inputLine[self.index-1]
        else:
            raise Exception("There is no more input")
    def flush(self):
        self.out.flush()
    def myout(self, t):
        self.out.write(str(t)+"\n")
    def myerr(self, t):
        self.err.write("debug:"+str(t)+"\n")
    def myconv(self, list, no):#only join
        joinString = self.CONVSTR[no]
        if(isinstance(list, list)):
            return joinString.join(list)
        else:
            raise Exception("Don't join")
    def nextStrArray(self):
        return self.myconv(self.next(), 8).split()
    def nextCharArray(self):
        return self.myconv(self.next(), 0)
    def nextIntArray(self):
        return [int(x) for x in self.nextStrArray()]
    def nextLongArray(self):
        return [long(x) for x in self.nextStrArray()]
    #Don't have to see. end------------------------------------------
    def solve(self):#Here is the main function
        N = self.nextInt()
        list = self.nextIntArray()
        max = 0
        output = 0
        for i in range(N):
            if(max <= list[i]):
                max = list[i]
                output += 1
        self.myout(output)
    #Method addition frame start
    #Method addition frame end

if __name__ == "__main__":
    main = Main()
    main.solve()
    main.flush()