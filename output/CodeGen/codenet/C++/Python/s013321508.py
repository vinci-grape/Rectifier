def main():
    N, M = map(int, raw_input().split())
    L = map(int, raw_input().split())
    L.sort()
    for i in xrange(M):
        max_L = L.pop()
        if max_L == 0:
            break
        max_L /= 2
        itr = lower_bound(L, max_L)
        L.insert(itr, max_L)
        L.pop()
    ans = sum(L)
    print ans

if __name__ == '__main__':
    main()