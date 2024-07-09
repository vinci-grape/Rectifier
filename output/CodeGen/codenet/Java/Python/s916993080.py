import java.util.*;
import java.io.*;
import java.lang.*;


def main():
    n = int(input())
    arr = [[int(i) for i in input().split()] for i in range(n)]
    dp = [[0 for i in range(3)] for i in range(n)]
    dp[0][0] = arr[0][0]
    dp[0][1] = arr[0][1]
    dp[0][2] = arr[0][2]
    for i in range(1,n):
        for j in range(3):
            if j == 0:
                dp[i][j] = max(arr[i][0] + dp[i-1][1],arr[i][0] + dp[i-1][2])
            if j == 1:
                dp[i][j] = max(arr[i][1] + dp[i-1][0],arr[i][1] + dp[i-1][2])
            if j == 2:
                dp[i][j] = max(arr[i][2] + dp[i-1][1],arr[i][2] + dp[i-1][0])
    max = -1
    for i in range(3):
        if dp[n-1][i] > max:
            max = dp[n-1][i]
    print(max)


if __name__ == "__main__":
    main()