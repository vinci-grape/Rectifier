import java.util.*;
import java.io.*;

public class codeforces_216_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (true) {
            int n, m;
            try {
                n = sc.nextInt();
                m = sc.nextInt();
            } catch (Exception e) {
                return;
            }
            Map<Integer, List<Integer>> g = new HashMap<>();
            Set<Integer> seen = new HashSet<>();
            for (int i = 1; i <= n; i++) {
                g.put(i, new ArrayList<>());
            }
            for (int i = 0; i < m; i++) {
                int a = sc.nextInt();
                int b = sc.nextInt();
                g.get(a).add(b);
                g.get(b).add(a);
            }
            int ans = 0;
            for (int i = 1; i <= n; i++) {
                if (!seen.contains(i)) {
                    int nodes = 1;
                    int edges = g.get(i).size();
                    for (int j : g.get(i)) {
                        if (!seen.contains(j)) {
                            int x = 0, y = 0;
                            for (int k : g.get(j)) {
                                if (!seen.contains(k)) {
                                    x++;
                                    y++;
                                }
                            }
                            nodes += x;
                            edges += y;
                        }
                    }
                    if (nodes > 1 && nodes % 2 == 1 && 2 * nodes == edges) {
                        ans++;
                    }
                }
            }
            if ((n - ans) % 2 == 1) {
                ans++;
            }
            System.out.println(ans);
        }
    }
}