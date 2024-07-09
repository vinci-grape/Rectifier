import sys

def main():
    V, E, r = map(int, sys.stdin.readline().split())

    edges = []

    for i in range(E):
        source, target, distance = map(int, sys.stdin.readline().split())
        edges.append((source, target, distance))

    distances = [float('inf')] * V
    distances[r] = 0

    for i in range(V):
        for source, target, weight in edges:
            if distances[source] + weight < distances[target]:
                distances[target] = distances[source] + weight

    for i in range(V):
        if distances[i] == float('inf'):
            print('INF')
        else:
            print(distances[i])


if __name__ == '__main__':
    main()