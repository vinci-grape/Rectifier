def main(args):
    sc = Scanner(System.in)
    n = sc.nextInt()
    a = [sc.nextInt() for _ in range(n)]
    s = sc.next()
    sum = 0
    for i in range(len(s)):
        ch = s[i]
        if ch == 'B':
            sum += a[i]
    ans = sum
    sum1 = sum
    for i in range(len(s)):
        if s[i] == 'A':
            sum1 += a[i]
        else:
            sum1 -= a[i]
    ans = max(ans, sum1)
    sum1 = sum
    for i in range(len(s)-1, -1, -1):
        if s[i] == 'A':
            sum1 += a[i]
        else:
            sum1 -= a[i]
    ans = max(ans, sum1)
    print(ans)