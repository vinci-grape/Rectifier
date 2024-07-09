import sys
import math

def main():
    sc = sys.stdin.readline()
    a, b = map(int, sc.split())
    digit = int(math.log10(a+b) + 1)
    print(digit)

if __name__ == '__main__':
    main()