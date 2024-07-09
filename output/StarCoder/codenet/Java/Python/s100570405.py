import sys
import math
import io

class MyInput:
    def __init__(self):
        self.instream = io.open(sys.argv[1], 'r')
        self.curline = self.instream.readline()
        self.nextline = self.instream.readline()
        self.curidx = 0
        self.nextidx = 0

    def hasNext(self):
        if self.nextidx < len(self.nextline):
            return True
        else:
            self.curline = self.nextline
            self.curidx = self.nextidx
            self.nextline = self.instream.readline()
            self.nextidx = 0
            if self.nextline == '':
                return False
            else:
                return True

    def next(self):
        if not self.hasNext():
            raise Exception('No more input')
        self.nextidx += 1
        return self.curline[self.curidx:self.nextidx]

    def nextInt(self):
        return int(self.next())

    def nextLong(self):
        return long(self.next())

    def nextDouble(self):
        return float(self.next())

class Main:
    def __init__(self):
        self.instream = MyInput()
        self.run()

    def run(self):
        Sd = self.instream.next()
        T = self.instream.next()
        count = 0
        c = ''
        ok = False
        first = -1
        end = -1
        for j in range(len(Sd)):
            count = 0
            for i in range(j, len(Sd)):
                c = Sd[i]
                if c == '?' or c == T[count]:
                    count += 1
                    if count == len(T):
                        first = i - len(T) + 1
                        end = i
                        ok = True
                        break
                else:
                    count = 0
            if ok:
                break
        if ok:
            for i in range(len(Sd)):
                if first <= i and i <= end:
                    print T[i - first]
                else:
                    if Sd[i] == '?':
                        print 'a'
                    else:
                        print Sd[i]
        else:
            print 'UNRESTORABLE'

if __name__ == '__main__':
    Main()