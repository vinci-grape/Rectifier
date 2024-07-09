import sys

def main():
    a = int(raw_input())
    b = int(raw_input())
    print "Yes" if a % 500 <= b else "No"

if __name__ == "__main__":
    main()