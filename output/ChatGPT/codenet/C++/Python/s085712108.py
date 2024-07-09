a = input()
b = input()
c = input()

queue = []
visited = set()

queue.append((a, b, c, 0))

while queue:
    fro = queue.pop(0)
    a, b, c, tot = fro

    if a == b and b == c:
        print(tot)
        break

    for f in [(1, 1, 0), (1, 0, 1), (0, 1, 1), (2, 0, 0), (0, 2, 0), (0, 0, 2)]:
        push = (a + f[0], b + f[1], c + f[2], tot + 1)
        n = push[0]*10000 + push[1]*100 + push[2]

        if n not in visited:
            visited.add(n)
            queue.append(push)