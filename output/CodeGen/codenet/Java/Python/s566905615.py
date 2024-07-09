import sys

def main():
    a = int(sys.stdin.readline())
    b = int(sys.stdin.readline())
    c = int(sys.stdin.readline())
    answer = "No"
    if a + b >= c:
        answer = "Yes"
    print(answer)

if __name__ == "__main__":
    main()