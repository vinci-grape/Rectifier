public class atcoder_AGC004_D {
    static int dfs(int[][] links, int n, int k, int v, int p) {
        int heightFromLeaf = 0;
        int cutCount = 0;
        for (int u : links[v]) {
            if (u == 0) {
                continue;
            }
            int hgt = dfs(links, n, k, u, v);
            heightFromLeaf = Math.max(heightFromLeaf, hgt);
            cutCount += cut;
        }
        heightFromLeaf += 1;
        if (p != 0 && heightFromLeaf == k) {
            heightFromLeaf = 0;
            cutCount += 1;
        }
        return heightFromLeaf, cutCount;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        int[][] links = new int[n][];
        for (int i = 0; i < n; i++) {
            int m = scanner.nextInt();
            links[i] = new int[m];
            for (int j = 0; j < m; j++) {
                links[i][j] = scanner.nextInt();
            }
        }
        int ans = dfs(links, n, k, 0, 0);
        if (links[0][0] != 1) {
            ans += 1;
        }
        System.out.println(ans);
    }
}