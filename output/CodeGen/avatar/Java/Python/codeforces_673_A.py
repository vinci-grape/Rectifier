def main(args):
    sc = input()
    n = sc.next()
    a = []
    for i in range(n):
        a.append(sc.next())
    result = 0
    if a[0] > 15:
        result = 15
    else:
        for i in range(1, n):
            if a[i] - a[i-1] > 15:
                pos = i - 1
                flag = 1
                break
        if flag == 1:
            result = a[pos] + 15
        else:
            result = a[n-1] + 15
    if result > 90:
        result = 90
    print(result)