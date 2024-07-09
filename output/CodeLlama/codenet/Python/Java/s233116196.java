import java.util.*;
import java.io.*;

class Graph {
    int V;
    LinkedList<Integer> adj[];

    Graph(int v) {
        V = v;
        adj = new LinkedList[v+1];
        for (int i=0; i<=v; ++i)
            adj[i] = new LinkedList();
    }

    void addEdge(int v, int w) {
        adj[v].add(w);
        adj[w].add(v);
    }
}

public class s233116196 {
    static int[] color;
    static int cnt;

    static void dfs(Graph g, int v, int c) {
        color[v] = c;
        for (int i : g.adj[v]) {
            if (color[i] == -1)
                dfs(g, i, c);
        }
    }

    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();
        Graph g = new Graph(N);
        for (int i=0; i<M; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            g.addEdge(a, b);
        }
        color = new int[N+1];
        for (int i=1; i<=N; i++)
            color[i] = -1;
        cnt = 0;
        for (int i=1; i<=N; i++) {
            if (color[i] == -1) {
                dfs(g, i, cnt);
                cnt++;
            }
        }
        System.out.println(cnt);
    }
}
