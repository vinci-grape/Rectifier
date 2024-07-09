import sys

def main():
    while True:
        try:
            a = int(input())
            b = int(input())
            c = max(a, b)
            if a == c and b != c:
                print("GREATER")
            elif b == c and a != c:
                print("LESS")
            else:
                print("EQUAL")
        except EOFError:
            break

if __name__ == "__main__":
    main()