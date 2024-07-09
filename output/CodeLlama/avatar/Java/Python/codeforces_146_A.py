import math
import sys

def main():
    x = 0
    y = 0
    t = 0
    n = int(sys.stdin.readline())
    str = sys.stdin.readline()
    l = list(str)
    for i in range(n):
        if l[i] != '4' and l[i] != '7':
            t = 1
    if t == 1:
        print('NO')
    else:
        for i in range(n//2):
            x = x + int(l[i])
        for i in range(n-1, (n//2)-1, -1):
            y = y + int(l[i])
        if x == y:
            print('YES')
        else:
            print('NO')

if __name__ == '__main__':
    main()