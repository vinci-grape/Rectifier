import sys
import collections

def dfs(child, par):
    global count
    global seen
    global path
    global cycle
    if seen[child]:
        return cycle
    seen[child] = True
    for i in graph[child]:
        if i != par:
            count += 1
            if dfs(i, child) == cycle:
                return cycle
    return path


if __name__ == '__main__':
    m, n = map(int, sys.stdin.readline().split())
    graph = collections.defaultdict(list)
    count = 0
    seen = [False] * (m + 1)
    path = 0
    cycle = 1
    for _ in range(n):
        x, y = map(int, sys.stdin.readline().split())
        graph[x].append(y)
        graph[y].append(x)
    toremove = 0
    for i in range(1, m + 1):
        if not seen[i]:
            count = 0
            if dfs(i, 0) == cycle:
                if count % 2 == 1:
                    toremove += 1
    if (m - toremove) % 2 == 1:
        toremove += 1
    print(toremove)