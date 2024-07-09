import java.util.*;
import java.io.*;
public class atcoder_ABC148_F {
    static int n,ta,ao;
    static ArrayList<Integer>[] g;
    static int[] ta_dist,ao_dist;
    public static void main ( String[] args )
    {
        n=in.nextInt();
        ta=in.nextInt();
        ao=in.nextInt();
        ta--;ao--;
        g=new ArrayList[n];
        for(int i=0;i<n;i++) g[i]=new ArrayList<Integer>();
        for(int i=0;i<n-1;i++)
        {
            int a=in.nextInt(),b=in.nextInt();
            g[a-1].add(b-1);
            g[b-1].add(a-1);
        }
        ta_dist=new int[n];
        ao_dist=new int[n];
        dfs(ta,ta_dist);
        dfs(ao,ao_dist);
        int res=0;
        for(int i=0;i<n;i++) res=Math.max(res,ao_dist[i]);
        System.out.println(res-1);
    }
    static void dfs(int node,int[] dist)
    {
        for(int v:g[node])
        {
            if(dist[v]!=-1) continue;
            dist[v]=dist[node]+1;
            dfs(v,dist);
        }
    }
}