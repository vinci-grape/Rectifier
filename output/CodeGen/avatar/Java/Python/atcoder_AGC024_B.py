def main(args):
    N = int(input())
    P = [int(i) - 1 for i in input().split()]
    map = {}
    for i in range(N):
        map[P[i]] = i
    nglist = []
    for i in range(N - 1):
        if map[i] > map[i + 1]:
            nglist.append(i)
    if not nglist:
        print(0)
        return
    ans = min(N - len(nglist) - 1, len(nglist) + 1)
    for i in range(len(nglist) - 1):
        ans = min(nglist[i] + 1 + N - nglist[i + 1] - 1, ans)
    print(ans)