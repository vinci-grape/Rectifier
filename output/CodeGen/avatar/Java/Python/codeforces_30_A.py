def main():
    sc = Scanner(sys.stdin)
    A = sc.nextint()
    B = sc.nextint()
    n = sc.nextint()
    if A == 0:
        if B == 0:
            print 1
        else:
            print "No solution"
        return
    if B % A!= 0:
        print "No solution"
        return
    B /= A
    neg = B < 0
    if neg and n % 2 == 0:
        print "No solution"
        return
    if neg:
        B = -B
    for x in xrange(0, B+1):
        if pow(x, n) == B:
            print neg and -x or x
            return
    print "No solution"