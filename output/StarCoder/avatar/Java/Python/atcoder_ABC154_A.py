import sys

def main():
    input = sys.stdin.readline
    a, b = map(int, input().split())
    u = input().rstrip()
    if u == str(a):
        print(a - 1, b)
    else:
        print(a, b - 1)

if __name__ == '__main__':
    main()