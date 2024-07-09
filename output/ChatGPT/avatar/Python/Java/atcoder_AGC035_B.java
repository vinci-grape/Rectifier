import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;
import java.util.PriorityQueue;

public class atcoder_AGC035_B {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();
        int M = input.nextInt();
        ArrayList<Set<Integer>> edges = new ArrayList<>();
        int[] degs = new int[N];
        int[] parity = new int[N];
        boolean[] flag = new boolean[N];
        
        for (int i = 0; i < N; i++) {
            edges.add(new HashSet<>());
            degs[i] = 0;
            parity[i] = 0;
            flag[i] = false;
        }
        
        for (int i = 0; i < M; i++) {
            int a = input.nextInt() - 1;
            int b = input.nextInt() - 1;
            edges.get(a).add(b);
            edges.get(b).add(a);
            degs[a]++;
            degs[b]++;
        }
        
        if (M % 2 != 0) {
            System.out.println(-1);
            System.exit(0);
        }
        
        PriorityQueue<Pair<Integer, Integer>> Q = new PriorityQueue<>();
        for (int i = 0; i < N; i++) {
            Q.add(new Pair<>(degs[i], i));
        }
        
        while (!Q.isEmpty()) {
            Pair<Integer, Integer> pair = Q.poll();
            int u = pair.getValue();
            
            if (flag[u]) {
                continue;
            }
            
            flag[u] = true;
            
            for (int v : edges.get(u)) {
                edges.get(v).remove(u);
                
                if (parity[u] != 0 && v == edges.get(u).get(0)) {
                    System.out.println((u + 1) + " " + (v + 1));
                    parity[u] = 1 - parity[u];
                } else {
                    System.out.println((v + 1) + " " + (u + 1));
                    parity[v] = 1 - parity[v];
                }
                
                degs[v]--;
                Q.add(new Pair<>(degs[v], v));
            }
        }
    }
}