class atcoder_ABC133_E {
    private class Node {
        public long pattern = 0;
        public int index;
        public LinkedList<Integer> children = new LinkedList<Integer>();
        public int parent = -1;

        public Node(int i) {
            this.index = i;
        }

        public void setParent(int K, int parent, int use, Node[] nodes) {
            this.pattern = K - use;
            this.parent = parent;
            int count = 1;
            if (parent!= -1) {
                count++;
            }
            for (int n : children) {
                if (n == this.parent) {
                    continue;
                }
                nodes[n].setParent(K, index, count, nodes);
                count++;
            }
        }
    }

    def solve(self):
        N = int(input())
        K = int(input())
        nodes = [Node(i) for i in range(N)]
        for i in range(N - 1):
            a = int(input())
            b = int(input())
            nodes[a].children.append(b)
            nodes[b].children.append(a)
        nodes[0].setParent(K, -1, 0, nodes)
        patterns = 1
        for i in range(N):
            patterns = (patterns * nodes[i].pattern) % 1_000_000_007
        print(patterns)

}