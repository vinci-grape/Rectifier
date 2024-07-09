def solve():
    ans = 0
    n = int(input())
    # Contribution of The Nodes.
    for i in range(1, n+1):
        ans += i * (n-i+1)
    for i in range(1, n):
        u, v = map(int, input().split())
        a = max(u, v)
        b = min(u, v)
        ans -= b * (n-a+1)
    print(ans)

solve()