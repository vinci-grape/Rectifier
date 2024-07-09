import java.util.*;
public class s491954463 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();
        int a[]=new int[m];
        int b[]=new int[m];
        for(int i=0;i<m;i++)
        {
            a[i]=sc.nextInt();
            b[i]=sc.nextInt();
        }
        for(int i=1;i<=n;i++)
        {
            int c=0;
            for(int j=0;j<m;j++)
            {
                if(a[j]==i)
                    c++;
                if(b[j]==i)
                    c++;
            }
            System.out.println(c);
        }
    }
}