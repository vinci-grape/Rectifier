def main(args):
    in = raw_input()
    x, y, a, b = map(int, in.split())
    count = 0
    for i in range(a, x+1):
        for j in range(b, y+1):
            if i <= j:
                continue
            count += 1
    print count
    for i in range(a, x+1):
        for j in range(b, y+1):
            if i <= j:
                continue
            print i, j

if __name__ == '__main__':
    main(sys.argv)