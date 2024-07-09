import sys
import math

def main(test):
    N = int(sys.stdin.readline())
    A = list(map(int, sys.stdin.readline().split()))
    A.sort(reverse=True)

    res = 0

    q = []
    q.append([A[N - 1], A[N - 1]])

    for i in range(N - 2, -1, -1):
        a = A[i]
        place = q.pop()
        res += min(place[0], place[1])
        q.append([place[0], a])
        q.append([a, place[1]])

    print(res)

if __name__ == '__main__':
    test = int(sys.stdin.readline())
    for i in range(test):
        main(i + 1)