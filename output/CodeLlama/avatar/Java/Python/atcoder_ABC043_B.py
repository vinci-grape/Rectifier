import sys

def main():
    s = sys.stdin.readline().strip()
    d = ""
    for c in s:
        if c == "0" or c == "1":
            d += c
        elif c == "B":
            if len(d) > 0:
                d = d[:-1]
    print(d)

if __name__ == "__main__":
    main()