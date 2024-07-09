import java.util.*;
public class s747093551 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        int M=sc.nextInt();
        int X=sc.nextInt();
        int Y=sc.nextInt();
        int[] x=new int[N];
        int[] y=new int[M];
        for(int i=0;i<N;i++)
            x[i]=sc.nextInt();
        for(int i=0;i<M;i++)
            y[i]=sc.nextInt();
        int maxx=x[0];
        int minn=y[0];
        for(int i=1;i<N;i++)
            if(x[i]>maxx)
                maxx=x[i];
        for(int i=1;i<M;i++)
            if(y[i]<minn)
                minn=y[i];
        if(maxx<minn)
            System.out.println("No War");
        else
            System.out.println("War");
    }
}