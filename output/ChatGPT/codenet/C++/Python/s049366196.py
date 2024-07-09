def is_prime(x):
    for i in range(2, int(x**0.5) + 1):
        if x % i == 0:
            return False
    return True

N = int(input())

ans = 1
for i in range(2, N + 1):
    if is_prime(i):
        NN = N
        cnt = 0
        while NN:
            cnt += NN // i
            NN //= i
        ans *= cnt + 1
        ans %= 10**9 + 7

print(ans)