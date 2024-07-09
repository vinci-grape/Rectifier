def main ( ):
    N = int(input())
    K = int(input())
    S = [int(i) for i in input().split()]
    temp = 0
    ans = 1000000000
    if K == 1:
        for i in range(0, N):
            temp = S[i]
            ans = min(abs(temp), ans)
        print(ans)
    else:
        if N - K!= 0:
            for i in range(0, N - K + 1):
                min = S[i]
                max = S[i + K - 1]
                if min < 0 and max > 0:
                    temp = 2 * (- min) + max
                else:
                    temp = max if max > 0 else min
                ans = min(ans, temp)
            print(ans)
        else:
            min = S[0]
            max = S[N - 1]
            if min < 0 and max > 0:
                print(2 * (- min) + max)
            else:
                print(max if max > 0 else min)

if __name__ == "__main__":
    main()