import sys
import math

def getValueAtIndex(index):
    return 1 + (index - 1) * index / 2

def solve():
    position = int(sc.next())
    nrstSeqStartIndx = 1
    while getValueAtIndex(nrstSeqStartIndx * 2) < position:
        nrstSeqStartIndx *= 2
    while getValueAtIndex(nrstSeqStartIndx + 1) <= position:
        nrstSeqStartIndx += 1
    startIndex = getValueAtIndex(nrstSeqStartIndx)
    out.println((position - startIndex) + 1)

def main():
    try:
        inp = sys.stdin.buffer
        out = sys.stdout.buffer
    except AttributeError:
        inp = sys.stdin
        out = sys.stdout
    sc = sys.stdin.read().split()
    solve()
    out.flush()

if __name__ == '__main__':
    main()