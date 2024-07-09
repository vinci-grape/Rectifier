import sys
import math

class Main:
    def __init__(self):
        self.in = sys.stdin
        self.out = sys.stdout

    def run(self):
        Sd = self.in.readline()
        T = self.in.readline()
        count = 0
        c = '?'
        ok = False
        first = -1
        end = -1
        for j in range(len(Sd)):
            count = 0
            for i in range(len(Sd)):
                c = Sd[i+j]
                if c == '?' or c == T[count]:
                    count += 1
                    if count == len(T):
                        first = i+j - len(T) + 1
                        end = i+j
                        ok = True
                        break
                else:
                    count = 0
            if ok:
                for i in range(len(Sd)):
                    if first <= i and i <= end:
                        self.out.write(T[i - first])
                    else:
                        if Sd[i] == '?':
                            self.out.write('a')
                        else:
                            self.out.write(Sd[i])
                self.out.write('\n')
                ok = False
            else:
                self.out.write('UNRESTORABLE\n')

if __name__ == '__main__':
    sys.stdout = sys.stderr
    m = Main()
    m.run()