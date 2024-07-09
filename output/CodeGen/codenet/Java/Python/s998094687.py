import math
import sys

def main():
    n = int(sys.stdin.readline())
    a = [int(x) for x in sys.stdin.readline().split()]
    a.sort()
    if math.pow(a[2], 2) == math.pow(a[0], 2) + math.pow(a[1], 2):
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    main()