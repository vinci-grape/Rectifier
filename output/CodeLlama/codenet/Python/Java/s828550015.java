import java.util.*;
public class s828550015 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int x=sc.nextInt();
        int y=sc.nextInt();
        int a=sc.nextInt();
        int b=sc.nextInt();
        int c=sc.nextInt();
        int[] p=new int[x];
        int[] q=new int[y];
        int[] r=new int[c];
        int[] pq=new int[x+y];
        for(int i=0;i<x;i++)
            p[i]=sc.nextInt();
        for(int i=0;i<y;i++)
            q[i]=sc.nextInt();
        for(int i=0;i<c;i++)
            r[i]=sc.nextInt();
        Arrays.sort(p);
        Arrays.sort(q);
        Arrays.sort(r);
        for(int i=0;i<x+y;i++)
            pq[i]=Math.max(p[i],q[i]);
        for(int i=0;i<c;i++)
            pq[i]=Math.max(pq[i],r[i]);
        int sum=0;
        for(int i=0;i<x+y;i++)
            sum+=pq[i];
        System.out.println(sum);
    }
}