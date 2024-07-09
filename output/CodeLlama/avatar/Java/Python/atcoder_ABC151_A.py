import sys


def main():
    s = sys.stdin.readline().rstrip()
    print(chr(ord(s[0]) + 1))


if __name__ == "__main__":
    main()