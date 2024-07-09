import sys

def main():
    N = int(sys.stdin.readline())
    max, min = map(int, sys.stdin.readline().split())
    for i in range(1, N):
        inp = int(sys.stdin.readline())
        max = max(max, inp)
        min = min(min, inp)
    print(max - min)

if __name__ == '__main__':
    main()