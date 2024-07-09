def main():
    while True:
        sum = 0
        s = input()
        if s == '0': break
        for i in range(len(s)):
            a = s[i]
            sum += a - '0'
        print(sum)

if __name__ == '__main__':
    main()