def main():
    a, b = map(int, raw_input().split())
    bstr = str(b)
    num = a * pow(10, len(bstr)) + b
    for i in range(1, 100100):
        if i * i == num:
            break
    if i > 100100:
        print "No"
    else:
        print "Yes"

if __name__ == '__main__':
    main()