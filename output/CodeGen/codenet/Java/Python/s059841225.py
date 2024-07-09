def main():
    sc = Scanner(System.in)
    while sc.hasNext():
        str = sc.next()
        strArr = str.split(",")
        l = [int(i) for i in strArr]
        d = 0
        for i in range(10):
            d += l[i]
        v = [int(i) for i in strArr[10:]]
        t = (d + v[0] + v[1]) / (v[0] + v[1])
        d = 0
        for i in range(11):
            if v[0] * t <= d:
                print(i)
                break
            else:
                d += l[i]

if __name__ == "__main__":
    main()