def dfs(list):
    if len(list) == n:
        score = 0
        for i in range(q):
            score += (list[b[i]] - list[a[i]] == c[i]) * d[i]
        ans = max(ans, score)
        return
    if not list:
        for i in range(1, m+1):
            list.append(i)
            dfs(list)
            list.pop()
    else:
        for i in range(list[-1], m+1):
            list.append(i)
            dfs(list)
            list.pop()

import sys

def main():
    n, m, q = map(int, sys.stdin.readline().split())
    a = [int(x) - 1 for x in sys.stdin.readline().split()]
    b = [int(x) - 1 for x in sys.stdin.readline().split()]
    c = [int(x) for x in sys.stdin.readline().split()]
    d = [int(x) for x in sys.stdin.readline().split()]
    ans = - 100
    dfs([])
    print(ans)

if __name__ == '__main__':
    main()