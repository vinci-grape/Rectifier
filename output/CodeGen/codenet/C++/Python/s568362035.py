def main():
    n, m, Q = map(int, raw_input().split())
    a = map(int, raw_input().split())
    b = []
    id = []
    vis = [False] * (n + 1)
    cnt = [0] * (n + 1)
    for i in range(m):
        b.append(int(raw_input()))
        id.append(i)
    for i in range(m, n + 1):
        if not vis[int(raw_input())]:
            b.append(i)
            vis[i] = True
            id.append(i)
    for i in range(m):
        if not vis[i]:
            b.append(i)
            vis[i] = True
            id.append(i)
    for i in range(m, n + 1):
        if not vis[i]:
            b.append(i)
            vis[i] = True
            id.append(i)
    for i in range(m):
        cnt[b[i]] += 1
    for i in range(m, n + 1):
        cnt[b[i]] -= 1
        if cnt[b[i]] == 0:
            cnt[b[i - 1]] += 1
            vis[b[i - 1]] = True
            id[b[i - 1]] = i - 1
    for i in range(m):
        if cnt[b[i]] == 0:
            cnt[b[i + 1]] += 1
            vis[b[i + 1]] = True
            id[b[i + 1]] = i + 1
    flag = True
    l = 0
    for i in range(n):
        if cnt[l] == 0:
            l += 1
    for i in range(l, m):
        flag &= b[i] < b[i + 1]
    if flag:
        print "Yes"
    else:
        print "No"

main()