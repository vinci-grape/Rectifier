import java.util.*;
import java.lang.*;
import java.io.*;

public class s853750785 {
    public static void main (String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();
        int[] H = new int[N];
        for(int i=0; i<N; i++){
            H[i] = sc.nextInt();
        }
        ArrayList<Integer>[] G = new ArrayList[N];
        for(int i=0; i<N; i++){
            G[i] = new ArrayList<Integer>();
        }
        for(int i=0; i<M; i++){
            int u = sc.nextInt();
            int v = sc.nextInt();
            u--; v--;
            G[u].add(v);
            G[v].add(u);
        }
        long ans = 0;
        for(int u=0; u<N; u++){
            boolean flag = true;
            for(int v : G[u]){
                if(H[u] <= H[v]){
                    flag = false;
                }
            }
            if(flag){
                ans++;
            }
        }
        System.out.println(ans);
    }
}