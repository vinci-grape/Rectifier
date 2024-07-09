graph = []
counter = []

def dfs(v, par, val):
    global graph, counter
    for i in graph[v]:
        if i != par:
            dfs(i, v, val + counter[v])
    counter[v] += val

def main():
    global graph, counter
    n, q = map(int, input().split())
    graph = [[] for _ in range(n)]
    counter = [0] * n
    for _ in range(n-1):
        a, b = map(int, input().split())
        graph[a-1].append(b-1)
        graph[b-1].append(a-1)
    for _ in range(q):
        x, y = map(int, input().split())
        counter[x-1] += y
    dfs(0, -1, 0)
    print(" ".join(map(str, counter)))

if __name__ == "__main__":
    main()