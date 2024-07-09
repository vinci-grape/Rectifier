import sys

def dfs(array):
    if len(array) > n:
        score = 0
        for i in range(q):
            if array[b[i]] - array[a[i]] == c[i]:
                score += d[i]
        max = max(max, score)
        return

    # Append an item to the existing array
    newArray = array + [array[-1] + 1]
    while newArray[-1] <= m:
        dfs(newArray)
        newArray[-1] += 1

n, m, q = map(int, sys.stdin.readline().split())
a = [int(x) for x in sys.stdin.readline().split()]
b = [int(x) for x in sys.stdin.readline().split()]
c = [int(x) for x in sys.stdin.readline().split()]
d = [int(x) for x in sys.stdin.readline().split()]

max = 0
dfs([1])
print(max)