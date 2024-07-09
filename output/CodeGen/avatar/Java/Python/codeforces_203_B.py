def main():
    N = int(input())
    M = int(input())
    black = [[0] * (N + 2) for _ in range(N + 2)]
    for m in range(1, M + 1):
        x = int(input())
        y = int(input())
        for xx in range(x - 1, x + 1):
            for yy in range(y - 1, y + 1):
                black[xx][yy] += 1
                if black[xx][yy] == 9:
                    return m
    return -1

if __name__ == '__main__':
    main()