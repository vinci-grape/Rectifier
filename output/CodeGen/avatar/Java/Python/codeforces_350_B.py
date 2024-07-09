def main ():
    n = int(input())
    a = [int(i) for i in input().split()]
    b = [int(i) for i in input().split()]
    num = [0] * (n + 1)
    for i in range(1, n + 1):
        num[b[i]] += 1
    st = [False] * (n + 1)
    for i in range(1, n + 1):
        if a[i] == 1:
            st[i] = True
            ss = ""
            x = b[i]
            sss = ""
            s = 1
            while not st[x] and num[x] == 1 and x!= 0 and a[x]!= 1:
                sss = sss + str(x)
                st[x] = True
                x = b[x]
                s += 1
            if s > ans:
                ans = s
                ss = sss.reverse()
    print(ans)
    print(ss)