import java.util.Queue;
import java.util.LinkedList;
import java.util.ArrayList;
import java.util.List;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;
import java.util.TreeSet;
import java.util.Iterator;
import java.util.Stack;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

class Solution {
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
        int n = in.nextInt();
        int m = in.nextInt();
        int[][] g = new int[n+1][n+1];
        for (int i = 0; i < m; i++) {
            int u = in.nextInt()-1;
            int v = in.nextInt()-1;
            g[u][v] = 1;
            g[v][u] = 1;
        }
        int ci = 0, cb = 0, cc = 0;
        for (int i = 1; i <= n; i++) {
            if (g[0][i] == 0) {
                ci++;
            }
            if (g[i][0] == 0) {
                cb++;
            }
            if (g[0][0] == 0) {
                cc++;
            }
            for (int j = 1; j <= n; j++) {
                if (g[i][j] == 1) {
                    for (int k = 1; k <= n; k++) {
                        if (g[j][k] == 1) {
                            g[i][j] = 2;
                            g[j][k] = 2;
                            g[i][k] = 2;
                        }
                    }
                }
            }
        }
        int ans = ci * ci + 2 * ci * (n - ci) + cc * cc + 2 * cb * cc + 2 * cb * cb;
        System.out.println(ans);
    }
}