class Node {
    int val;
    boolean color;
    List<int[]> a;

    public Node() {
        val = 0;
        color = false;
        a = new ArrayList<>();
    }
}

public class atcoder_ABC126_D {
    static List<Node> nodes;
    static Node root;
    static Set<Node> nodeSet;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine();

        nodes = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            nodes.add(new Node());
        }

        for (int i = 0; i < n - 1; i++) {
            int u = scanner.nextInt();
            int v = scanner.nextInt();
            int w = scanner.nextInt();
            scanner.nextLine();

            Node node1 = nodes.get(u - 1);
            Node node2 = nodes.get(v - 1);
            node1.val = u;
            node2.val = v;
            node1.a.add(new int[]{node2, w});
            node2.a.add(new int[]{node1, w});
        }

        root = nodes.get(0);
        root.color = true;
        nodeSet = new HashSet<>();

        traverse(root, 0);

        for (int i = 0; i < n; i++) {
            Node node = nodes.get(i);
            if (node.color) {
                System.out.println(1);
            } else {
                System.out.println(0);
            }
        }
    }

    static void traverse(Node node, int distance) {
        if (nodeSet.contains(node)) {
            return;
        } else {
            nodeSet.add(node);
        }

        for (int[] pair : node.a) {
            Node adjNode = pair[0];
            int dis = pair[1];

            if ((distance + dis) % 2 == 0) {
                adjNode.color = root.color;
            } else {
                adjNode.color = !root.color;
            }

            traverse(adjNode, distance + dis);
        }
    }
}