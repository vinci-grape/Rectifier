def main():
    s = int(input())
    a = set()
    a.add(s)
    while True:
        if s % 2 == 0:
            x = s // 2
            if a.find(x)!= a.end():
                print(d)
                return
            a.add(x)
        else:
            x = 3 * s + 1
            if a.find(x)!= a.end():
                print(d)
                return
            a.add(x)
        s = x
        d += 1
    print(d)

if __name__ == '__main__':
    main()