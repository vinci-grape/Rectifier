import sys

def main():
    inputs = sys.stdin.readline().split()
    num1 = int(inputs[0])
    num2 = int(inputs[1])
    print("Yes" if num1 % 500 <= num2 else "No")

if __name__ == "__main__":
    main()