def main(n):
    s = input()
    a = [int(i) for i in s.split()]
    r = []
    m = 0
    for i in range(1, n):
        if abs(a[m]) < abs(a[i]):
            m = i
    for i in range(0, n):
        if a[m] >= 0 ^ a[i] >= 0:
            r.append(m + 1 + " " + (i + 1))
    if a[m] >= 0:
        for i in range(1, n):
            r.append(i + " " + (i + 1))
    else:
        for i in range(n, 1, -1):
            r.append(i + " " + (i - 1))
    print(len(r))
    r.sort()
    r.forEach(print)