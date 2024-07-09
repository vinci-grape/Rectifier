import sys

def main():
    n = int(raw_input())
    beacon = [0] * 1000001
    dp = [0] * 1000001
    for i in range(n):
        a = int(raw_input())
        beacon[a] = int(raw_input())
    if beacon[0]!= 0:
        dp[0] = 1
    for i in range(1, 1000001):
        if beacon[i]!= 0 and beacon[i] < i:
            dp[i] = dp[i - beacon[i] - 1] + 1
        elif beacon[i]!= 0:
            dp[i] = 1
        else:
            dp[i] = dp[i - 1]
    print n - max(dp)

if __name__ == '__main__':
    main()