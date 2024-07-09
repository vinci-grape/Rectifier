import sys

def main():
    n = int(input())
    a = [int(x) for x in input().split()]
    dp1 = [0] * n
    dp2 = [0] * n
    current1 = 0
    current2 = 0
    for i in range(n):
        dp1[i] = dp1[i - 1] + abs(a[i] - current1)
        current1 = a[i]
    for i in range(n - 1, -1, -1):
        dp2[i] = dp2[i + 1] + abs(a[i] - current2)
        current2 = a[i]
    for i in range(n):
        if i == 0:
            print(dp2[i + 1] + abs(a[1]))
        elif i == n - 1:
            print(dp1[i - 1] + abs(a[i - 1]))
        else:
            print(dp1[i - 1] + dp2[i + 1] + abs(a[i - 1] - a[i + 1]))

if __name__ == '__main__':
    main()