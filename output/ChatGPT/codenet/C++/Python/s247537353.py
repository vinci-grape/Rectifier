import sys

def main():
    A, B, C, K = map(int, sys.stdin.readline().split())
    if A + B >= K:
        print(min(A, K))
    else:
        print(A - (K - (A + B)))

if __name__ == "__main__":
    main()