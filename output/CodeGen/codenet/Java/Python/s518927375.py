def main():
    k = int(input())
    a = int(input())
    b = int(input())
    if b <= a + 2:
        print(1 + k)
        return
    x = k - (a - 1)
    ans = a + (x // 2) * (b - a) + (x % 2)
    print(ans)

main()