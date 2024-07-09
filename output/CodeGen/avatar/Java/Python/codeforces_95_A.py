def main():
    n = int(input())
    ss = [[]] * n
    for i in range(n):
        ss[i] = input().strip()
    cc = input().strip()
    m = len(cc)
    c = cc[0]
    c_ = c.upper()
    a = c == 'a' and 'b' or 'a'
    a_ = a.upper()
    lucky = [False] * m
    for j in range(m):
        for i in range(n):
            l = len(ss[i])
            if m - j >= l and compare(cc, j, ss[i], 0, l) == 0:
                for h in range(l):
                    lucky[j + h] = True
    for j in range(m):
        if lucky[j]:
            if cc[j] == c: cc[j] = a_
            else: cc[j] = c_
    print(cc)


def compare(a, i, b, j, m):
    while m > 0:
        if a[i]!= b[j]:
            return a[i] - b[j]
        i += 1
        j += 1
        m -= 1
    return 0


main()