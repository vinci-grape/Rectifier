def is_prime(x):
    if x < 2:
        return False
    for i in range(2, x):
        if x % i == 0:
            return False
    return True

def main():
    N = int(input())
    ans = 1
    for i in range(2, N+1):
        if is_prime(i):
            cnt = 0
            while N >= i:
                cnt += N // i
                N //= i
            ans *= cnt + 1
            ans %= mod
    print(ans)

main()