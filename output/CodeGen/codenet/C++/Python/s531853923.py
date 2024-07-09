def main():
    a, b, c, d = map(int, raw_input().split())
    if a*b%2 == 1 and (c+d)%2 == 1:
        print "No"
    else:
        print "Yes"

if __name__ == '__main__':
    main()