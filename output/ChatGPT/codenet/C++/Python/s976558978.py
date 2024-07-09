import sys

def main():
    a = int(sys.stdin.readline())
    b = int(sys.stdin.readline())
    if a < b:
        for i in range(b):
            print(a)
    else:
        for i in range(a):
            print(b)

if __name__ == "__main__":
    main()