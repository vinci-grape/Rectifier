import java.util.*;

public class s350755479 {
    
    static class Node {
        int x, y, id;
        
        public Node(int x, int y, int id) {
            this.x = x;
            this.y = y;
            this.id = id;
        }
    }
    
    static class Edge implements Comparable<Edge> {
        int u, v, val;
        
        public Edge(int u, int v, int val) {
            this.u = u;
            this.v = v;
            this.val = val;
        }
        
        @Override
        public int compareTo(Edge rhs) {
            return Integer.compare(this.val, rhs.val);
        }
    }
    
    static int[] par;
    static int n;
    
    static void init() {
        par = new int[n + 1];
        for (int i = 0; i <= n; i++)
            par[i] = i;
    }
    
    static int findpar(int x) {
        return par[x] = (par[x] == x ? x : findpar(par[x]));
    }
    
    static void unite(int x, int y) {
        x = findpar(x);
        y = findpar(y);
        if (x == y)
            return;
        par[x] = y;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        
        init();
        
        Node[] node = new Node[n + 1];
        for (int i = 1; i <= n; i++) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            node[i] = new Node(x, y, i);
        }
        
        Arrays.sort(node, 1, n + 1, new Comparator<Node>() {
            @Override
            public int compare(Node a, Node b) {
                return Integer.compare(a.x, b.x);
            }
        });
        
        int cnt = 0;
        Edge[] e = new Edge[n << 1];
        for (int i = 2; i <= n; i++)
            e[cnt++] = new Edge(node[i - 1].id, node[i].id, node[i].x - node[i - 1].x);
        
        Arrays.sort(node, 1, n + 1, new Comparator<Node>() {
            @Override
            public int compare(Node a, Node b) {
                return Integer.compare(a.y, b.y);
            }
        });
        for (int i = 2; i <= n; i++)
            e[cnt++] = new Edge(node[i - 1].id, node[i].id, node[i].y - node[i - 1].y);
        
        Arrays.sort(e, 0, cnt);
        
        long ans = 0;
        for (int i = 0; i < cnt; i++) {
            int u = e[i].u, v = e[i].v, val = e[i].val;
            if (findpar(u) == findpar(v))
                continue;
            unite(u, v);
            ans += val;
        }
        
        System.out.println(ans);
    }
}