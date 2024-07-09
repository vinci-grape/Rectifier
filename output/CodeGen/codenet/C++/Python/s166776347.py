def main():
    # 入力
    N,K = map(int,raw_input().split())
    A = map(int,raw_input().split())

    # 解法 
    ans1 = 0
    for i in range(N):
        for j in range(N):
            if i >= j: continue
            if A[i] > A[j]: ans1 += 1
            ans1 %= mod

    # 解法2
    count = [0]*2005
    for i in range(N):
        count[A[i]-1] += 1
    remain = N
    for i in range(2005):
        remain -= count[i]
        ans2 += count[i]*remain
    K %= mod
    ans2 %= mod
    ans1 *= K
    ans1 %= mod
    ans2 *= K
    ans2 %= mod
    ans = ans1 + ans2
    ans %= mod
    ans += K*(K-1)/2
    ans %= mod
    print ans


if __name__ == '__main__':
    main()