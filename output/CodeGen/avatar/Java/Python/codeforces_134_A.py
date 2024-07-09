def main ():
    sc = input()
    n = sc.next()
    arr = [sc.next() for _ in range(n)]
    sum = 0
    for i in range(n):
        sum += arr[i]
    c = 0
    sb = []
    for i in range(n):
        if (sum - arr[i]) % (n - 1) == 0 and (sum - arr[i]) / (n - 1) == arr[i]:
            c += 1
            sb.append(i + 1)
    print(c)
    print(''.join(sb))