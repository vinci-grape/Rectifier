import sys

def main():
    k = int(raw_input().strip())
    a = int(raw_input().strip())
    b = int(raw_input().strip())

    if b <= a + 2:
        print 1 + k
        return

    x = k - (a - 1)
    ans = a + (x / 2) * (b - a) + (x % 2)

    print ans

if __name__ == "__main__":
    main()