def main():
    a, b = map(int, raw_input().split())
    if ((a + b) % 2 == 0):
        print (a + b) / 2
    else:
        print "IMPOSSIBLE"

if __name__ == '__main__':
    main()