import sys
import math

def solve():
    position = int(raw_input())
    nrstSeqStartIndx = 1
    while getValueAtIndex(nrstSeqStartIndx * 2) < position:
        nrstSeqStartIndx *= 2
    while getValueAtIndex(nrstSeqStartIndx + 1) <= position:
        nrstSeqStartIndx += 1
    startIndex = getValueAtIndex(nrstSeqStartIndx)
    print (position - startIndex) + 1

def getValueAtIndex(index):
    return 1 + ( (index - 1) * index / 2 )

if __name__ == "__main__":
    solve()