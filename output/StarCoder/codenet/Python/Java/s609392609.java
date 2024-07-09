import java.util.*;
public class s609392609 {
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int t[]=new int[n];
        for(int i=0;i<n;i++)
        t[i]=sc.nextInt();
        int m=sc.nextInt();
        for(int i=0;i<m;i++)
        {
            int p=sc.nextInt();
            int x=sc.nextInt();
            int s=0;
            for(int j=0;j<n;j++)
            {
                if(j==p-1)
                s+=x;
                else
                s+=t[j];
            }
            System.out.println(s);
        }
    }
}