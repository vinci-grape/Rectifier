import java.util.*;
import java.io.*;
public class atcoder_AGC035_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        ArrayList<Integer>[] adj = new ArrayList[n];
        int[] deg = new int[n];
        int[] parity = new int[n];
        boolean[] flag = new boolean[n];
        for(int i=0;i<n;i++)
            adj[i] = new ArrayList<>();
        for(int i=0;i<m;i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            adj[a-1].add(b-1);
            adj[b-1].add(a-1);
            deg[a-1]++;
            deg[b-1]++;
        }
        if(m%2!=0) {
            System.out.println(-1);
            return;
        }
        PriorityQueue<Integer> pq = new PriorityQueue<>(new Comparator<Integer>() {
            @Override
            public int compare(Integer o1, Integer o2) {
                return deg[o2]-deg[o1];
            }
        });
        for(int i=0;i<n;i++)
            pq.add(i);
        while(!pq.isEmpty()) {
            int u = pq.poll();
            if(flag[u])
                continue;
            flag[u] = true;
            for(int i=0;i<adj[u].size();i++) {
                int v = adj[u].get(i);
                adj[v].remove((Integer)u);
                if(parity[u]!=0 && i==0) {
                    System.out.println(u+1+" "+v+1);
                    parity[u] = 1-parity[u];
                }
                else {
                    System.out.println(v+1+" "+u+1);
                    parity[v] = 1-parity[v];
                }
                deg[v]--;
                pq.add(v);
            }
        }
    }
}