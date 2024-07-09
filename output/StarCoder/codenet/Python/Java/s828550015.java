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
        for(int i=0;i<x;i++)
            p[i]=sc.nextInt();
        for(int i=0;i<y;i++)
            q[i]=sc.nextInt();
        for(int i=0;i<c;i++)
            r[i]=sc.nextInt();
        Arrays.sort(p);
        Arrays.sort(q);
        Arrays.sort(r);
        int[] pq=new int[x+y];
        for(int i=0;i<x+y;i++)
            pq[i]=p[i%x]+q[i%y];
        for(int i=0;i<a+b+c;i++)
            if(pq[i]<r[i])
                pq[i]=r[i];
        System.out.println(Arrays.stream(pq).sum());
    }
}