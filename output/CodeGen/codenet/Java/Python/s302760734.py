def main():
    s = raw_input().strip()
    t = raw_input().strip()
    check = False
    for i in range(len(s) - len(t)):
        check2 = True
        for j in range(len(t)):
            if s[i + j]!= '?' and s[i + j]!= t[j]:
                check2 = False
        if check2:
            check = True
            for j in range(len(t)):
                s[i + j] = t[j]
            if check:
                break
    if check:
        for i in range(len(s)):
            if s[i] == '?':
                print "a"
            else:
                print s[i]
        print
    else:
        print "UNRESTORABLE"

if __name__ == '__main__':
    main()