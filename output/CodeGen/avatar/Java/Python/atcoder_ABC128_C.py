def main():
    sc = Scanner()
    N = sc.nextInt()
    M = sc.nextInt()
    a = [0] * N
    for i in range(N):
        a[i] = 0
    for i in range(M):
        k = sc.nextInt()
        for j in range(k):
            s = sc.nextInt()
            s -= 1
            a[s] |= 1 << i
    p = 0
    for i in range(M):
        x = sc.nextInt()
        p |= (x << i)
    ans = 0
    for s in range(2**N):
        t = 0
        for i in range(N):
            if ( ( ( s >> i ) & 1 ) == 1 ):
                t ^= a[i]
        if ( p == t ):
            ans += 1
    print(ans)
    sc.close()