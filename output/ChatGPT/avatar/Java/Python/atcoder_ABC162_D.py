def main():
    n = int(input())
    s = input()
    rc = 0
    gc = 0
    bc = 0
    for i in range(len(s)):
        if s[i] == 'R':
            rc += 1
        elif s[i] == 'G':
            gc += 1
        else:
            bc += 1
    result = rc * gc * bc
    for i in range(1, n):
        for k in range(i+1, n+1):
            if (i + k) % 2 == 0:
                is_ = s[i-1]
                ks = s[k-1]
                js = s[((i + k) // 2)-1]
                if is_ != ks and ks != js and js != is_:
                    result -= 1
    print(result)

if __name__ == "__main__":
    main()