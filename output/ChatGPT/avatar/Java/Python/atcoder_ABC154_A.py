import sys

def main():
    str = sys.stdin.readline().split()
    a, b = map(int, sys.stdin.readline().split())
    u = sys.stdin.readline().strip()
    if u == str[0]:
        print(a-1, b)
    else:
        print(a, b-1)

if __name__ == "__main__":
    main()