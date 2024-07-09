import java.util.*;
import java.io.*;

public class atcoder_AGC014_D {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] adj = new int[n + 1];
        for (int i = 1; i <= n; i++) {
            adj[i] = new ArrayList<Integer>();
        }
        for (int i = 1; i < n; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            adj[a].add(b);
            adj[b].add(a);
        }
        Queue<Integer> q = new LinkedList<Integer>();
        q.add(1);
        boolean[] seen = new boolean[n + 1];
        seen[1] = true;
        int[] par = new int[n + 1];
        int[] child_num = new int[n + 1];
        while (!q.isEmpty()) {
            int v = q.poll();
            for (int u : adj[v]) {
                if (!seen[u]) {
                    seen[u] = true;
                    par[u] = v;
                    child_num[v]++;
                    q.add(u);
                }
            }
        }
        Queue<Integer> seq = new LinkedList<Integer>();
        for (int i = 1; i <= n; i++) {
            if (child_num[i] == 0) {
                seq.add(i);
            }
        }
        while (!seq.isEmpty()) {
            int c = seq.poll();
            seen[c] = false;
            if (!seen[par[c]]) {
                System.out.println("First");
                return;
            }
            seen[par[c]] = false;
            child_num[par[par[c]]]--;
            if (child_num[par[par[c]]] == 0) {
                seq.add(par[par[c]]);
            }
        }
        System.out.println("Second");
    }
}