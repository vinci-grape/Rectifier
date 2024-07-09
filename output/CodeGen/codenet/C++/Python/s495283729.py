def main():
    s = raw_input()
    i = 0
    flag = 0
    while i < len(s):
        if i % 2 == 0:
            switch s[i]:
                case 'R':
                    break
                case 'U':
                    break
                case 'D':
                    break
                default:
                    flag = 1
                    break
        else:
            switch s[i]:
                case 'L':
                    break
                case 'U':
                    break
                case 'D':
                    break
                default:
                    flag = 1
                    break
        i += 1
    if flag == 0:
        print "Yes"
    else:
        print "No"

if __name__ == '__main__':
    main()