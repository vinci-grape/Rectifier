import sys

def main():
    for line in sys.stdin:
        a, b = map(int, line.strip().split())
        digit = len(str(a + b))
        print(digit)

if __name__ == "__main__":
    main()