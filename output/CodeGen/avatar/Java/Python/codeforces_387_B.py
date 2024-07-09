def main(args):
    n = int(input())
    m = int(input())
    req = [int(x) for x in input().split()]
    pre = [int(x) for x in input().split()]
    i = n - 1
    j = m - 1
    ans = 0
    while i >= 0 and j >= 0:
        if req[i] > pre[j]:
            ans += 1
        else:
            j -= 1
        i -= 1
    print(ans + i + 1)