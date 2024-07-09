def main():
    size = int(input())
    graph = [[0] * size for _ in range(size)]
    for i in range(size):
        id = int(input())
        cols = int(input())
        row = [0] * size
        for j in range(cols):
            row[int(input())-1] = 1
        graph[id-1] = row
    for i in range(size):
        for j in range(size):
            print(graph[i][j], end=" ")
        print()

main()