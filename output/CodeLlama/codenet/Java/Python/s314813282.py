import sys

def main():
    m, n, x, y = map(int, sys.stdin.readline().split())
    a = list(map(int, sys.stdin.readline().split()))
    b = list(map(int, sys.stdin.readline().split()))
    x_max = max(x, *a)
    y_min = min(y, *b)
    if x_max >= y_min:
        print("War")
    else:
        print("No War")

if __name__ == "__main__":
    main()