def main():
    s = input()
    n = len(s)
    ans = 0
    for mask in range(2 ** (n - 1)):
        x = ""
        for i in range(n - 1):
            if (mask & (1 << i)) >= 1:
                x += "+" + s[i + 1]
            else:
                x += s[i + 1]
        split = x.split("+")
        for i in range(len(split)):
            ans += int(split[i])
    print(ans)

if __name__ == '__main__':
    main()