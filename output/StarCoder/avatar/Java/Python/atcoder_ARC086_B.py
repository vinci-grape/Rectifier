import sys

def main():
    input = sys.stdin.readline
    N = int(input())
    A = list(map(int, input().split()))
    m = 0
    for i in range(1, N):
        if abs(A[m]) < abs(A[i]):
            m = i
    R = []
    if A[m] >= 0:
        for i in range(1, N):
            R.append(str(m + 1) + " " + str(i + 1))
        for i in range(1, N):
            R.append(str(i + 1) + " " + str(i + 1))
    else:
        for i in range(N):
            R.append(str(i + 1) + " " + str(i + 1))
        for i in range(N - 1):
            R.append(str(i + 1) + " " + str(i + 2))
    print(len(R))
    print("\n".join(R))

if __name__ == '__main__':
    main()