def main():
    N, K = map(int, raw_input().split())
    A = map(int, raw_input().split())
    dic = [-1] * (N + 1)
    cur = 1
    flg = False
    for i in xrange(K):
        if dic[cur] < 0 or flg:
            dic[cur] = i
            cur = A[cur]
        else:
            tmp = K - (dic[cur] - 1)
            tmp %= i - dic[cur]
            i = K - tmp
            flg = True
    print cur

if __name__ == '__main__':
    main()