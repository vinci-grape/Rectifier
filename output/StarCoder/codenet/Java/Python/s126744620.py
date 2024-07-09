import sys

def main():
    n = int(raw_input().strip())
    k = int(raw_input().strip())
    a = map(int, raw_input().strip().split(' '))
    x = [0] * 200010
    for i in range(n):
        x[a[i] - 1] += 1
    x.sort()
    ans = 0
    for i in range(200010 - k - 1):
        ans += x[i]
    print ans

if __name__ == "__main__":
    main()