def getFail(b,m):
    j = 0
    f = [0,0]
    for i in range(2,m+1):
        while j > 0 and b[j+1]!= b[i]:
            j = f[j]
        if b[j+1] == b[i]:
            j += 1
        f[i] = j
    return f

def main():
    n = int(input())
    s1 = input()
    str = input()
    cnt = 0
    b = [0]*(n+1)
    for i in range(1,n+1):
        b[i] = str[i-1]
    for i in range(1,n+1):
        b[i] = s1[i-1]
    f = getFail(b,n)
    len = min(f[n],min(n,n))
    print(2*n-len)

main()