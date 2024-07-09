import sys

def read():
    return sys.stdin.readline().strip()

def main():
    n = int(read())
    if n == 1:
        print("Hello World")
    else:
        a, b = map(int, read().split())
        print(a + b)

if __name__ == "__main__":
    main()