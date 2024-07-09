import java.util.LinkedList ; import java.util.Scanner ; class Node:
    def __init__(self, i):
        self.pattern = 0
        self.index = i
        self.children = LinkedList()
        self.parent = -1
    def setParent(self, K, parent, use, nodes):
        self.pattern = K - use
        self.parent = parent
        count = 1
        if parent!= -1:
            count += 1
        for n in self.children:
            if n == self.parent:
                continue
            nodes[n].setParent(K, self.index, count, nodes)
            count += 1

def solve():
    in_ = Scanner(System.in)
    N = in_.nextInt()
    K = in_.nextInt()
    nodes = [Node(i) for i in range(N)]
    for i in range(N - 1):
        a = in_.nextInt() - 1
        b = in_.nextInt() - 1
        nodes[a].children.add(b)
        nodes[b].children.add(a)
    nodes[0].setParent(K, -1, 0, nodes)
    patterns = 1
    for i in range(N):
        patterns = (patterns * nodes[i].pattern) % 1_000_000_007
    System.out.println(patterns)

if __name__ == '__main__':
    solve()