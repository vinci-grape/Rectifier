import sys


def main():
    z = sys.stdin.readline().strip()
    a = len(z)
    for i in range(a - 1):
        if z[i] == z[i + 1]:
            print("Bad")
            return
    print("Good")


if __name__ == "__main__":
    main()