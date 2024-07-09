def main():
    a = int(input())
    t = 0
    h = 0
    lt = 0
    lh = 0
    tt = 0
    hh = 0
    l = 0
    for i in range(a):
        taro = input()
        hana = input()
        lt = len(taro)
        lh = len(hana)
        if lt > lh:
            l = lt
        else:
            l = lh
        tt = t + 3
        hh = h + 3
        if taro > hana:
            t = t + 3
        else:
            h = h + 3
        if hana == taro:
            h = h + 1
            t = t + 1
    print(t, h)

if __name__ == '__main__':
    main()