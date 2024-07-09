import java.util.*;
import java.lang.*;
import java.io.*;

class Node {
    int val;
    boolean color;
    List<Node> a;
    public Node() {
        a = new ArrayList<Node>();
    }
}
class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        Node[] nodes = new Node[n];
        for(int i=0; i<n; i++){
            nodes[i] = new Node();
        }
        for(int i=0; i<n-1; i++){
            int u = in.nextInt();
            int v = in.nextInt();
            int w = in.nextInt();
            nodes[u-1].a.add(new Node[]{nodes[v-1], w});
            nodes[v-1].a.add(new Node[]{nodes[u-1], w});
        }
        int root = in.nextInt();
        nodes[root-1].color = true;
        boolean[] visited = new boolean[n];
        for(int i=0; i<n; i++){
            if(nodes[i].color == true)
                System.out.print(1);
            else
                System.out.print(0);
        }
    }
}