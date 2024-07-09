import sys

def main():
    VP = int(sys.stdin.readline())
    VD = int(sys.stdin.readline())
    T = int(sys.stdin.readline())
    F = int(sys.stdin.readline())
    C = int(sys.stdin.readline())
    if VD <= VP:
        print("0")
        return
    start = T
    answer = 0
    while True:
        x = start * VP / (VD - VP)
        if (start + x) * VP >= C:
            break
        start += 2 * x + F
        answer += 1
    print(answer)

if __name__ == "__main__":
    main()