def main():
    n = int(input())
    a = [int(i) for i in input().split()]
    b = [int(i) for i in input().split()]
    temp = 0
    q = 0
    w = 0
    e = 0
    f = False
    for i in range(n):
        if temp < a[i]:
            if q > b[i]:
                f = True
            q = b[i]
            temp = a[i]
        if temp > a[i]:
            if q < b[i]:
                f = True
            q = b[i]
            temp = a[i]
        if a[i] > w:
            w = a[i]
            if b[i] < e:
                f = True
            e = b[i]
        if a[i] < w:
            if b[i] > e:
                f = True
    if f == True:
        print("Happy Alex")
    else:
        print("Poor Alex")

if __name__ == '__main__':
    main()