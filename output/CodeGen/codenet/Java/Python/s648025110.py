def main():
    n = int(input())
    h = [int(i) for i in input().split()]
    ans = 0
    out = 0
    for i in range(n):
        if out < h[i]:
            ans += h[i] - out
            out = h[i]
        else:
            out = h[i]
    print(ans)

if __name__ == '__main__':
    main()