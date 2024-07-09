import java.util.*;
import java.io.*;

public class atcoder_AGC014_D {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int N = Integer.parseInt(sc.nextLine());
        int[][] adj = new int[N + 1][];
        for (int i = 0; i < N - 1; i++) {
            String[] input = sc.nextLine().split(" ");
            int a = Integer.parseInt(input[0]);
            int b = Integer.parseInt(input[1]);
            adj[a] = new int[2];
            adj[a][0] = b;
            adj[a][1] = 1;
            adj[b] = new int[2];
            adj[b][0] = a;
            adj[b][1] = 1;
        }
        int[] par = new int[N + 1];
        int[] child_num = new int[N + 1];
        int[] seen = new int[N + 1];
        int[] seq = new int[N + 1];
        Deque<Integer> que = new ArrayDeque<Integer>();
        que.add(1);
        seen[1] = 1;
        par[1] = 0;
        child_num[1] = 0;
        while (que.size() > 0) {
            int v = que.removeFirst();
            for (int u : adj[v]) {
                if (seen[u] == 0) {
                    seen[u] = 1;
                    par[u] = v;
                    child_num[v]++;
                    que.add(u);
                }
            }
        }
        for (int i = 1; i <= N; i++) {
            if (child_num[i] == 0) {
                seq.add(i);
            }
        }
        while (seq.size() > 0) {
            int c = seq.removeFirst();
            seen[c] = 0;
            if (seen[par[c]] == 0) {
                seq.add(par