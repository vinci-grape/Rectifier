def main():
    n = int(input())
    m = int(input())
    a = [int(i) for i in input().split()]
    cnt = [1]
    num = 1
    if m > 0:
        if a[1] == 1:
            cnt[1] = 0
            if num < m:
                num += 1
        else:
            cnt[1] = 1
    else:
        cnt[1] = 1
    for i in range(2, len(cnt)):
        cnt[i] = cnt[i - 2] + cnt[i - 1]
        cnt[i] %= 1000000007
        if m > 0:
            if i == a[num]:
                cnt[i] = 0
                if num < m:
                    num += 1
        print(cnt[i])

if __name__ == "__main__":
    main()