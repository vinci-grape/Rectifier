def main(args):
    str = input()
    n = int(str)
    s = ""
    while n > 0:
        x = n % 2
        n /= 2
        s += x + ""
    ans = 0
    for i in range(len(s)):
        if s[i] == '1':
            ans += 1
    print(ans)

#test

print(main(input()))