import sys

def main():
    a = int(sys.stdin.readline())
    b = int(sys.stdin.readline())
    if b % a == 0:
        print(a + b)
    else:
        print(b - a)

if __name__ == '__main__':
    main()