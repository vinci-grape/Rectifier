import sys
import math

def main():
    input = sys.stdin.readline
    MOD = 10 ** 9 + 7
    n = int(input())
    k = int(input())
    a = list(map(int, input().split()))
    a.sort()
    INF = 10 ** 18 + 1
    l = -INF
    r = INF
    while l + 1 < r:
        c = (l + r) // 2
        if check(c):
            l = c
        else:
            r = c
    print(l)

def check(x):
    tot = 0
    for i in range(n):
        now = a[i]
        l = 0
        r = n
        if now >= 0:
            while l < r:
                c = (l + r) // 2
                if now * a[c] < x:
                    l = c + 1
                else:
                    r = c
            tot += l
        else:
            while l < r:
                c = (l + r) // 2
                if now * a[c] >= x:
                    l = c + 1
                else:
                    r = c
            tot += (n - l)
        if a[i] * a[i] < x:
            tot -= 1
    if tot // 2 < k:
        return True
    else:
        return False

if __name__ == '__main__':
    main()