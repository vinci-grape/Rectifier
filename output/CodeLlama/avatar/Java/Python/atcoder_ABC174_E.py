import sys

def solve(n, k, logs_length):
    min_ = 1
    max_ = 1000000000
    while min_ < max_:
        mid = (min_ + max_) // 2
        if nei(mid, logs_length, k):
            max_ = mid
        else:
            min_ = mid + 1
    print(min_)

def nei(mid, logs_length, k):
    for log in logs_length:
        k -= (log + mid - 1) // mid - 1
    return k >= 0

if __name__ == '__main__':
    n, k = map(int, sys.stdin.readline().split())
    logs_length = list(map(int, sys.stdin.readline().split()))
    solve(n, k, logs_length)