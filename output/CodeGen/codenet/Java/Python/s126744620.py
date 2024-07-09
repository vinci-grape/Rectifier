def main():
    n = int(input())
    k = int(input())
    a = [int(x) for x in input().split()]
    x = [0] * 200010
    for i in range(n):
        x[a[i] - 1] += 1
    x = sorted(x, reverse=True)
    ans = 0
    for i in range(len(x) - k - 1, -1, -1):
        ans += x[i]
    print(ans)