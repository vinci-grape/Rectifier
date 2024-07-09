def main():
    k = int(input())
    a = [int(x) for x in input().split()]
    min, max = 2, 3
    for i in range(k - 1, -1, -1):
        if a[i] > max:
            return -1
        else:
            max = ((max // a[i]) + 1) * a[i] - 1
            if min % a[i]!= 0:
                min = ((min // a[i]) + 1) * a[i]
    print(min, max)

if __name__ == '__main__':
    main()