def run():
    n = int(input())
    k = int(input())

    ans = 0
    for i in range(k, n+2):
        max_val = i*(2*n-i+1)//2
        min_val = i*(i-1)//2
        ans += (max_val - min_val + 1) % (10**9+7)
    print(ans % (10**9+7))

run()