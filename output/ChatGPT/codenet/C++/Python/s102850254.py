d = int(input())

def visit():
    dx = [0, 1, 0, -1]
    dy = [-1, 0, 1, 0]
    sum, flg = 0, 0
    x, y = 2, n
    map[y][x] = ' '
    ab = [2, 2, 2, 2]

    while True:
        sum = 0
        while True:
            if map[y + dy[flg] * 2][x + dx[flg] * 2] != '#' and map[y + dy[flg]][x + dx[flg]] != ' ':
                flg += 1
                break

            map[y + dy[flg]][x + dx[flg]] = ' '
            y += dy[flg]
            x += dx[flg]
            sum += 1

        if flg == 4:
            flg = 0
        if sum == 0:
            break
        ab[0] = ab[1]
        ab[1] = ab[2]
        ab[2] = sum
        if ab[0] == 1 and ab[2] == 1 and ab[1] == 1:
            break

for l in range(d):
    n = int(input())

    if n == 1:
        print("#")
        if l != d-1:
            print()
        continue

    map = [['#' for _ in range(n+2)] for _ in range(n+2)]

    for i in range(n+2):
        for j in range(n+2):
            if i == 0 or j == 0 or i == n+1 or j == n+1:
                map[i][j] = '.'

    visit()

    for i in range(1, n+1):
        for j in range(1, len(map[i])-1):
            print(map[i][j], end="")
        print()

    if l != d-1:
        print()