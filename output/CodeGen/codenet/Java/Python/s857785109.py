import sys

def main():
    n = int(sys.stdin.readline())
    if ((n/10)%111==0):
        print("Yes")
    else:
        print("No")

if __name__ == "__main__":
    main()