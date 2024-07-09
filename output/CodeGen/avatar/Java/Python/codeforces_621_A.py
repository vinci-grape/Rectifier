def main():
    sc = input()
    n = sc.next()
    list = []
    for i in range(n):
        list.append(sc.next())
    odd = []
    sum = 0
    for i in list:
        if i % 2 == 0:
            sum += i
        else:
            odd.append(i)
    odd.sort()
    for i in odd:
        sum += i
    if odd.count(odd[0]) % 2!= 0:
        sum -= odd[0]
    print(sum)

if __name__ == '__main__':
    main()