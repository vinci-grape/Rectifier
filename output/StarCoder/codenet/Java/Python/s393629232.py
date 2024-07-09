import sys

def main():
    n = int(raw_input().strip())
    maxv = -sys.maxint
    minv = int(raw_input().strip())
    for i in range(1, n):
        ri = int(raw_input().strip())
        maxv = max(maxv, ri - minv)
        minv = min(minv, ri)
    print maxv

if __name__ == "__main__":
    main()