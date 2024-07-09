import sys

def main():
    n, s = map(int, input().split())
    max_val = 0
    for _ in range(n):
        f, t = map(int, input().split())
        if max_val < f + t:
            max_val = f + t
    print(max(max_val, s))

if __name__ == "__main__":
    main()