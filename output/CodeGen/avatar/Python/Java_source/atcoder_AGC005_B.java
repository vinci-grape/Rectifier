public class atcoder_AGC005_B {
    public int findContentChildren(int[] g, int[] b) {
        int n = g.length;
        int[] par = new int[n];
        int[] rank = new int[n];
        int[] size = new int[n];
        for (int i = 0; i < n; i++) {
            par[i] = i;
            size[i] = 1;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (g[i] > g[j] && b[i] < b[j]) {
                    unite(i, j);
                }
            }
        }
        int c = 0;
        for (int i = 0; i < n; i++) {
            int l = 1;
            int r = 1;
            if (i > 0 && g[i - 1] > g[i]) {
                l += size[par[i - 1]];
                unite(i - 1, i);
            }
            if (i + 1 < n && g[i + 1] > g[i]) {
                r += size[par[i + 1]];
                unite(i + 1, i);
            }
            c += l * r * g[i];
        }
        return c;
    }
    
    private void unite(int x, int y) {
        int px = par[x];
        int py = par[y];
        if (px!= py) {
            if (rank[px] < rank[py]) {
                par[px] = py;
                size[py] += size[px];
            } else {
                par[py] = px;
                size[px] += size[py];
                if (rank[px] == rank[py]) rank[px] += 1;
            }
        }
    }
}