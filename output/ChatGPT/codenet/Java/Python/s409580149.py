def solve():
    n = int(input())
    a = list(map(int, input().split()))
    dp = [[[-1] * (n+1) for _ in range(n+1)] for _ in range(n+1)]
    dp[0][0][0] = 0
    cnt = [0] * 3
    for i in range(n):
        cnt[a[i]-1] += 1
    ans = rec(cnt[0], cnt[1], cnt[2])
    print(ans)

def rec(i, j, k):
    if dp[i][j][k] != -1:
        return dp[i][j][k]
    ret = 0
    p = (i + j + k) / n
    pi = i / n
    pj = j / n
    pk = k / n
    ret += 1/p
    if i > 0:
        ret += pi/p * rec(i-1, j, k)
    if j > 0:
        ret += pj/p * rec(i+1, j-1, k)
    if k > 0:
        ret += pk/p * rec(i, j+1, k-1)
    dp[i][j][k] = ret
    return ret

n = int(input())
a = list(map(int, input().split()))
dp = [[[0] * (n+1) for _ in range(n+1)] for _ in range(n+1)]
dp[0][0][0] = 0
cnt = [0] * 3
for i in range(n):
    cnt[a[i]-1] += 1
ans = rec(cnt[0], cnt[1], cnt[2])
print(ans)