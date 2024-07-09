#--- pB ---//
import sys

def main():
    while True:
        line = sys.stdin.readline()
        if not line:
            break

        N, K = map(int, line.split())
        print(get_len(N, K))

def get_len(N, K):
    len = 0
    while N > 0:
        N /= K
        len += 1
    return len

if __name__ == '__main__':
    main()