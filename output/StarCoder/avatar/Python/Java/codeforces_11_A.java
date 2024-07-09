import java.util.*;
public class codeforces_11_A {

    public static void main(String[] args) {
        // TODO Auto-generated method stub
        Scanner sc = new Scanner(System.in);
        int n,d,m=0,q=0;
        n = sc.nextInt();
        d = sc.nextInt();
        int x[] = new int[n];
        for(int i=0;i<n;i++)
        {
            x[i] = sc.nextInt();
        }
        for(int a=0;a<n-1;a++)
        {
            if(x[a]>=x[a+1])
            {
                q = (x[a]-x[a+1])/d + 1;
                m = m + q;
                x[a+1] = x[a+1] + q*d;
            }
        }
        System.out.println(m);
    }
}