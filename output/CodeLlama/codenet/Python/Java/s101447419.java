import java.util.*;
public class s101447419 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] v=new int[n];
        for(int i=0;i<n;i++)
            v[i]=sc.nextInt();
        int[] ve=new int[n/2];
        int[] vo=new int[n/2];
        for(int i=0;i<n/2;i++)
        {
            ve[i]=v[2*i];
            vo[i]=v[2*i+1];
        }
        Arrays.sort(ve);
        Arrays.sort(vo);
        int ans=n;
        if(ve[0]!=vo[0])
            ans=n-count(ve,ve[0])-count(vo,vo[0]);
        else if(count(ve,ve[0])==1&&count(vo,vo[0])==1)
            ans=n-count(ve,ve[0]);
        else if(count(ve,ve[0])==1)
            ans=n-count(ve,ve[0])-count(vo,vo[1]);
        else if(count(vo,vo[0])==1)
            ans=n-count(ve,ve[1])-count(vo,vo[0]);
        else
            ans=Math.min(n-count(ve,ve[0])-count(vo,vo[1]),n-count(ve,ve[1])-count(vo,vo[0]));
        System.out.println(ans);
    }
    public static int count(int[] v,int x)
    {
        int c=0;
        for(int i=0;i<v.length;i++)
            if(v[i]==x)
                c++;
        return c;
    }
}