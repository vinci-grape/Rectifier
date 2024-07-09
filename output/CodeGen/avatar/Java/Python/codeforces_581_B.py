import java.util.* ; import java.io.* ; 

def main ():
    in = raw_input()
    n = int(in)
    a = map(int,raw_input().split())
    dp = [ -1 for i in range(n+1)]
    dp[n-1] = a[n-1]
    for i in range(n-1,-1,-1):
        dp[i] = max(dp[i+1],a[i])
    for i in range(n):
        if a[i] > dp[i+1]:
            print 0,
        else:
            print dp[i+1]-a[i]+1,
    print

if __name__ == "__main__":
    main()