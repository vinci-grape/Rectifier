def main():
    n = int(input())
    k = int(input())
    a = [int(x) for x in input().split()]
    a.sort()
    INF = 1e18
    l = -INF
    r = INF
    while l + 1 < r:
        c = (l + r) // 2
        if check(c):
            l = c
        else:
            r = c
    print(l)

def check(x):
    tot = 0
    for i in range(n):
        now = a[i]
        if now >= 0:
            while l < r:
                c = (l + r) // 2
                if now * a[c] < x:
                    l = c + 1
                else:
                    r = c
            tot += l
        else:
            while l < r:
                c = (l + r) // 2
                if now * a[c] >= x:
                    l = c + 1
                else:
                    r = c
            tot += (n - l)
        if now * now < x:
            tot -= 1
    return tot // 2 < k

main()