def main(args):
    sc = Scanner(sys.stdin)
    S = sc.next()
    N = len(S)
    mod_arr = [0] * N
    mod_cnt = [0] * 2019
    radix = 1
    for i in range(N):
        tmp = (ord(S[N - 1 - i]) - ord('0')) * radix % 2019
        if i!= 0:
            tmp = (tmp + mod_arr[i - 1]) % 2019
        mod_arr[i] = tmp
        mod_cnt[tmp] += 1
        radix = radix * 10 % 2019
    ans = 0
    mod_cnt[0] += 1
    for i in range(2019):
        ans += mod_cnt[i] * (mod_cnt[i] - 1) // 2
    print(ans)