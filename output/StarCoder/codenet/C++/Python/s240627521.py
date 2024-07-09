import sys

def main():
    N = int(input())
    A = list(map(int, input().split()))
    A.sort(reverse=True)
    max = sys.maxsize
    index = 0
    for i in range(1, N):
        if max > abs(A[0] - 2 * A[i]):
            max = abs(A[0] - 2 * A[i])
            index = i
    print(A[0], A[index])

if __name__ == '__main__':
    main()