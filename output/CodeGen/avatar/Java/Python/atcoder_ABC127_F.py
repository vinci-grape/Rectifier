import sys
import math
import heapq

def readline():
    return sys.stdin.readline().strip()

def readint():
    return int(readline())

def readints():
    return [int(x) for x in readline().split()]

def main():
    t = readint()
    s = []
    for _ in range(t):
        s.append(readline())
    if s[0][0] == '2':
        print(min(readints()))
        print(sum(readints()))
        print(sum(readints()))
    else:
        print(min(readints()))
        print(sum(readints()))
        print(sum(readints()))

if __name__ == '__main__':
    main()