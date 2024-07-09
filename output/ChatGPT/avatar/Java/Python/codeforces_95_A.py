import sys

def compare(aa, i, bb, j, m):
    while m > 0:
        a = aa[i].upper()
        b = bb[j].upper()
        if a != b:
            return ord(a) - ord(b)
        i += 1
        j += 1
        m -= 1
    return 0

def main():
    n = int(input())
    ss = []
    for _ in range(n):
        ss.append(list(input()))
    cc = list(input())
    m = len(cc)
    c = input()[0]
    c_ = c.upper()
    a = 'b' if c == 'a' else 'a'
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
            if cc[j].lower() == c:
                cc[j] = a_ if cc[j].isupper() else a
            else:
                cc[j] = c_ if cc[j].isupper() else c
    print("".join(cc))

if __name__ == "__main__":
    main()