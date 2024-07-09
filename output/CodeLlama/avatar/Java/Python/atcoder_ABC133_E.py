import sys


def main():
    N, K = map(int, sys.stdin.readline().split())
    nodes = [Node(i) for i in range(N)]
    for i in range(N - 1):
        a, b = map(int, sys.stdin.readline().split())
        nodes[a - 1].children.append(b - 1)
        nodes[b - 1].children.append(a - 1)
    nodes[0].set_parent(K, -1, 0, nodes)
    patterns = 1
    for i in range(N):
        patterns = (patterns * nodes[i].pattern) % 1000000007
    print(patterns)


class Node:
    def __init__(self, i):
        self.index = i
        self.pattern = 0
        self.children = []
        self.parent = -1

    def set_parent(self, K, parent, use, nodes):
        self.pattern = K - use
        self.parent = parent
        count = 1
        if parent != -1:
            count += 1
        for n in self.children:
            if n == self.parent:
                continue
            nodes[n].set_parent(K, self.index, count, nodes)
            count += 1


if __name__ == '__main__':
    main()