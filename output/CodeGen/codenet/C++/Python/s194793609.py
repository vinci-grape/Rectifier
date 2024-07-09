def main():
    n = int(input())
    a = [int(i) for i in input().split()]
    abs_a = [abs(i) for i in a]
    ans = 0
    min = abs_a[0]
    for i in abs_a:
        ans += i
        if min > i:
            min = i
    num_negative = 0
    for i in a:
        if i < 0:
            num_negative += 1
    if num_negative % 2:
        ans -= min * 2
    print(ans)


if __name__ == '__main__':
    main()