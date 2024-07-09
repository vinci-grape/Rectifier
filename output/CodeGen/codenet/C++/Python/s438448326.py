def main():
    A, B, C, D, E, F = map(int, raw_input().split())
    m1, m2 = 0, 0
    maxD = 0.0
    for i in xrange(0, 100 * A):
        mA = 100 * A * i
        for j in xrange(0, 100 * B):
            mB = 100 * B * j
            for k in xrange(0, 100 * C):
                mC = 100 * C * k
                for l in xrange(0, 100 * D):
                    mD = 100 * D * l
                    if ((mA + mB) * E / 100 < mD + mC):
                        break
                    d = (mD + mC) / (mA + mB + mC + mD)
                    if d > maxD:
                        m1 = mA + mB + mC + mD
                        m2 = mC + mD
                        maxD = d
    print m1, m2

if __name__ == '__main__':
    main()