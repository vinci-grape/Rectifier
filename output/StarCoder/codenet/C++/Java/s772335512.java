import java.util.*;

public class s772335512 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] grundy = new int[N];
        boolean[] used = new boolean[N];
        for (int i = 0; i < N; i++) {
            G[i] = new ArrayList<Integer>();
            grundy[i] = 0;
            used[i] = false;
        }
        for (int i = 0; i < N - 1; i++) {
            int x = sc.nextInt() - 1;
            int y = sc.nextInt() - 1;
            G[x].add(y);
            G[y].add(x);
        }
        dfs(0);
        if (grundy[0]!= 0) {
            System.out.println("Alice");
        } else {
            System.out.println("Bob");
        }
    }

    public static void dfs(int v) {
        used[v] = true;
        grundy[v] = 0;
        for (int i = 0; i < G[v].size(); i++) {
            if (!used[G[v].get(i)]) {
                dfs(G[v].get(i));
                grundy[v] ^= (grundy[G[v].get(i)] + 1);
            }
        }
    }

    static ArrayList<Integer>[] G = new ArrayList[100000];
}