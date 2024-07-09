import sys

class Edge:
    def __init__(self, source, target, weight):
        self.source = source
        self.target = target
        self.weight = weight

def bellman_ford(V, E, r, edges):
    distances = [sys.maxsize] * V
    distances[r] = 0

    for _ in range(V - 1):
        for edge in edges:
            if distances[edge.source] != sys.maxsize:
                distances[edge.target] = min(distances[edge.target], distances[edge.source] + edge.weight)

    for edge in edges:
        if distances[edge.source] != sys.maxsize and distances[edge.source] + edge.weight < distances[edge.target]:
            return "Negative cycle detected"

    return distances

# Read inputs
V, E, r = map(int, input().split())
edges = []

for _ in range(E):
    source, target, weight = map(int, input().split())
    edges.append(Edge(source, target, weight))

# Run Bellman-Ford algorithm
distances = bellman_ford(V, E, r, edges)

# Print distances
for distance in distances:
    if distance == sys.maxsize:
        print("INF")
    else:
        print(distance)