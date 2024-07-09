import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

public class atcoder_ABC133_E {
    static long mod = (long) (1e9 + 7);
    static Map<Integer, List<Integer>> graph;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int K = scanner.nextInt();
        graph = new HashMap<>();

        for (int i = 0; i < N - 1; i++) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            if (!graph.containsKey(a - 1)) {
                graph.put(a - 1, new ArrayList<>());
            }
            if (!graph.containsKey(b - 1)) {
                graph.put(b - 1, new ArrayList<>());
            }
            graph.get(a - 1).add(b - 1);
            graph.get(b - 1).add(a - 1);
        }

        long ans = dfs(0, -1, K);
        System.out.println(ans);
    }

    static long dfs(int fro, int to, int f) {
        long caseNum = f;
        int colorNum = (f == K) ? K - 1 : K - 2;
        for (int u : graph.get(fro)) {
            if (u == to) {
                continue;
            }
            long pat = dfs(u, fro, colorNum);
            if (pat == 0) {
                caseNum = 0;
                break;
            }
            caseNum = (caseNum * pat) % mod;
            colorNum -= 1;
        }
        return caseNum;
    }
}