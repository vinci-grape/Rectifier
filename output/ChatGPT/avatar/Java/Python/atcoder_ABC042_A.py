import sys

def main():
    line = sys.stdin.readline().strip()
    x, a, y = map(int, line.split())

    h = "NO"
    if x == 5 or x == 7 or a == 5 or a == 7 or y == 5 or y == 7:
        if x + y + a == 17:
            h = "YES"
    
    print(h)

if __name__ == "__main__":
    main()