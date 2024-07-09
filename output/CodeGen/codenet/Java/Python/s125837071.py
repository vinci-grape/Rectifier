def findS(n, i):
    s = 0
    for j in range(2, n+1):
        if j % i == 0:
            s += 1
    return s

def main():
    n = int(input())
    ans = 1
    mod = (int) (10**9) + 7
    for i in range(2, n+1):
        for j in range(2, i+1):
            if j == i:
                s = 0
                for k in range(1, n+1):
                    s += findS(k, i)
                ans = (ans * (s + 1) ) % mod
            else:
                pass
    print(ans)

if __name__ == '__main__':
    main()