import java.util.*;
public class s847126533 {
    public static void main(String[] args)
    {
        Scanner cin=new Scanner(System.in);
        while(cin.hasNext())
        {
            int m=cin.nextInt();
            int n=cin.nextInt();
            if(m==0)
                break;
            int[] book=new int[n];
            for(int i=0;i<n;i++)
                book[i]=cin.nextInt();
            int l=0,r=1500000,ans=0;
            while(l<r)
            {
                int mid=(l+r)/2;
                if(check(m,mid,book))
                {
                    ans=mid;
                    if(r==mid)
                        break;
                    r=mid;
                }
                else
                {
                    if(l==mid)
                        break;
                    l=mid;
                }
            }
            System.out.println(ans);
        }
    }
    public static boolean check(int m,int wei,int[] book)
    {
        int tmp=wei;
        m--;
        for(int i=0;i<book.length;i++)
        {
            if(tmp<book[i])
            {
                if(m>0)
                {
                    m--;
                    tmp=wei;
                    if(tmp<book[i])
                        return false;
                }
                else
                    return false;
            }
            tmp-=book[i];
        }
        return true;
    }
}