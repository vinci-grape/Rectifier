def C(n,m):
    res = 1
    for i in range(m-n+1,m+1):
        res = res * i
    for i in range(1,n+1):
        res = res / i
    return res

def main():
    sc = Scanner()
    n, p = sc.nextInt(), sc.nextInt()
    k0, k1 = 0, 0
    for i in range(n):
        x = sc.nextInt()
        if x % 2 == 1:
            k1 += 1
        else:
            k0 += 1
    ans = 1
    for i in range(k0):
        ans = ans * 2
    if p == 0:
        for i in range(k1):
            ans = ans * 2
            for j in range(i, k1):
                ans = ans + C(i, j)
    else:
        for i in range(k1):
            ans = ans * 2
            for j in range(i+1, k1):
                ans = ans + C(i, j)
    print(ans)

main()