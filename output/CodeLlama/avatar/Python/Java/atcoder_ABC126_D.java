import java.util.*;
import java.lang.*;
import java.io.*;

class Node {
    int val;
    boolean color;
    ArrayList<ArrayList<Integer>> a = new ArrayList<ArrayList<Integer>>();
}

public class atcoder_ABC126_D {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Node[] nodes = new Node[n];
        for (int i = 0; i < n; i++) {
            nodes[i] = new Node();
        }
        for (int i = 0; i < n - 1; i++) {
            int u = sc.nextInt();
            int v = sc.nextInt();
            int w = sc.nextInt();
            Node node1 = nodes[u - 1];
            Node node2 = nodes[v - 1];
            node1.val = u;
            node2.val = v;
            ArrayList<Integer> temp = new ArrayList<Integer>();
            temp.add(v);
            temp.add(w);
            node1.a.add(temp);
            temp = new ArrayList<Integer>();
            temp.add(u);
            temp.add(w);
            node2.a.add(temp);
        }
        Node root = nodes[0];
        root.color = true;
        HashSet<Node> nodeSet = new HashSet<Node>();
        traverse(root, 0);
        for (int i = 0; i < n; i++) {
            Node node = nodes[i];
            if (node.color) {
                System.out.println(1);
            } else {
                System.out.println(0);
            }
        }
    }

    public static void traverse(Node node, int distance) {
        if (nodeSet.contains(node)) {
            return;
        } else {
            nodeSet.add(node);
        }
        for (ArrayList<Integer> pair : node.a) {
            Node adjNode = nodes[pair.get(0) - 1];
            int dis = pair.get(1);
            if ((distance + dis) % 2 == 0) {
                adjNode.color = root.color;
            } else {
                adjNode.color = !root.color;
            }
            traverse(adjNode, distance + dis);
        }
    }
}