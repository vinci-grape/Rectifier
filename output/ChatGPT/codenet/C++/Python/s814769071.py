# Python code equivalent to the above C++ code

n, k = map(int, input().split())
MOD = 10**9 + 7
mx = n * (n + 1) // 2 - (n - k)*(n - k + 1) // 2
mn = k * (k - 1) // 2
res = 0
for i in range(k, n + 2):
    res += mx - mn + 1
    mx += n - i
    mn += i
    res %= MOD
print(res)