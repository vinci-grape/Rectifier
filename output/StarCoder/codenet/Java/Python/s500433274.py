import sys
import math

def main():
    while True:
        a, b = raw_input().split()
        a = int(a)
        b = int(b)
        if a == 0 and b == 0:
            break
        if a > b:
            print "GREATER"
        elif a < b:
            print "LESS"
        else:
            print "EQUAL"

if __name__ == "__main__":
    main()