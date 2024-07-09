import sys
import math

def rec(x):
    answer = 0
    for k in range(31, -1, -1):
        if (x & (1 << k)) != 0:
            answer += 1
    return answer


def main():
    n = int(sys.stdin.readline())
    a = [0] * 33
    for i in range(n):
        a[rec(int(sys.stdin.readline()))] += 1
    answer = 0
    for i in range(len(a)):
        summ = (1 + a[i] - 1) / 2.0 * (a[i] - 1)
        answer += summ
    print(int(answer))


if __name__ == "__main__":
    main()