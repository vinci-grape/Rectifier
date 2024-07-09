n, m = map(int, input().split())

# n gu m ki

ans = 0
# gu gu
ans += n * (n - 1) // 2

# kiki
ans += m * (m - 1) // 2

print(ans)