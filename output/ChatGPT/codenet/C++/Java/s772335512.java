import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class s772335512 {
    static List<Integer>[] G;
    static boolean[] used;
    static int[] grundy;

    public static void dfs(int v) {
        used[v] = true;
        grundy[v] = 0;
        for (int i = 0; i < G[v].size(); i++) {
            int u = G[v].get(i);
            if (!used[u]) {
                dfs(u);
                grundy[v] ^= (grundy[u] + 1);
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        G = new ArrayList[N];
        used = new boolean[N];
        grundy = new int[N];
        for (int i = 0; i < N; i++) {
            G[i] = new ArrayList<>();
        }
        for (int i = 0; i < N - 1; i++) {
            int x = scanner.nextInt();
            int y = scanner.nextInt();
            x--;
            y--;
            G[x].add(y);
            G[y].add(x);
        }
        dfs(0);
        if (grundy[0] != 0) {
            System.out.println("Alice");
        } else {
            System.out.println("Bob");
        }
    }
}