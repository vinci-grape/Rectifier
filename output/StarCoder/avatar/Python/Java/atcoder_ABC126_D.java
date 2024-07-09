import java.util.*;
import java.io.*;
class Node {
    int val;
    boolean color;
    ArrayList<Node> a;
    Node() {
        a = new ArrayList<Node>();
    }
}
public class atcoder_ABC126_D {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Node[] nodes = new Node[n];
        for(int i = 0; i < n; i++) {
            nodes[i] = new Node();
        }
        for(int i = 0; i < n - 1; i++) {
            int u = sc.nextInt();
            int v = sc.nextInt();
            int w = sc.nextInt();
            Node node1 = nodes[u - 1];
            Node node2 = nodes[v - 1];
            node1.val = u;
            node2.val = v;
            node1.a.add(node2);
            node2.a.add(node1);
        }
        Node root = nodes[0];
        root.color = true;
        Set<Node> nodeSet = new HashSet<Node>();
        traverse(root, 0, nodeSet);
        for(int i = 0; i < n; i++) {
            Node node = nodes[i];
            if(node.color) {
                System.out.println(1);
            } else {
                System.out.println(0);
            }
        }
    }
    public static void traverse(Node node, int distance, Set<Node> nodeSet) {
        if(nodeSet.contains(node)) {
            return;
        }
        nodeSet.add(node);
        for(Node adjNode : node.a) {
            int dis = 0;
            for(Node pair : node.a) {
                if(pair.val == adjNode.val) {
                    dis = pair.val;
                    break;
                }
            }
            if((distance + dis) % 2 == 0) {
                adjNode.color = root.color;
            } else {
                adjNode.color =!root.color;
            }
            traverse(adjNode, distance + dis, nodeSet);
        }
    }
}