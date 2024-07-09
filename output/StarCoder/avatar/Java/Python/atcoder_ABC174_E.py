import sys
input = sys.stdin.readline

def main():
    n, k = map(int, input().split())
    logs_length = list(map(int, input().split()))
    min = 1
    max = 1000000000
    while min < max:
        mid = (min + max) // 2
        if nei(mid, logs_length, k):
            max = mid
        else:
            min = mid + 1
    print(min)

def nei(mid, logs_length, k):
    for log in logs_length:
        k -= (log + mid - 1) // mid - 1
    return k >= 0

if __name__ == "__main__":
    main()