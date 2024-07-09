import java.util.*;
import java.io.*;
public class atcoder_AGC004_D {
    static int n, k;
    static int[] a;
    static int[][] links;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] str = br.readLine().split(" ");
        n = Integer.parseInt(str[0]);
        k = Integer.parseInt(str[1]);
        a = new int[n];
        links = new int[n][n];
        for (int i = 0; i < n; i++) {
            links[i] = new int[n];
        }
        for (int i = 0; i < n; i++) {
            a[i] = Integer.parseInt(br.readLine()) - 1;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                links[a[i]][j] = 1;
            }
        }
        int[] ans = dfs(0, 0);
        System.out.println(ans[1]);
    }
    static int[] dfs(int v, int p) {
        int[] ans = new int[2];
        int heightFromLeaf = 0;
        int cutCount = 0;
        for (int u = 0; u < n; u++) {
            if (links[v][u] == 0) {
                continue;
            }
            int[] hgtCut = dfs(u, v);
            heightFromLeaf = Math.max(heightFromLeaf, hgtCut[0]);
            cutCount += hgtCut[1];
        }
        heightFromLeaf++;
        if (p!= 0 && heightFromLeaf == k) {
            heightFromLeaf = 0;
            cutCount++;
        }
        ans[0] = heightFromLeaf;
        ans[1] = cutCount;
        return ans;
    }
}