import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        int m = scan.nextInt();
        int n = scan.nextInt();
        int x = scan.nextInt();
        int y = scan.nextInt();
        int[] a = new int[m];
        for(int i=0;i<a.length;i++)
        {
            a[i] = scan.nextInt();
        }
        int[] b = new int[n];
        for(int i=0;i<b.length;i++)
        {
            b[i] = scan.nextInt();
        }
        int x_max = MaxInt(x,a);
        int y_min = MinInt(y,b);
        CheckWar(x_max,y_min);
    }
    
    static int MaxInt(int x,int[] a){
        int bignum=x;
        for(int i=0;i<a.length;i++)
        {
            bignum=max(bignum,a[i]);
        }
        return bignum;
    }
    
    static int MinInt(int y,int[] b){
        int smallnum=y;
        for(int i=0;i<b.length;i++)
        {
            smallnum=min(smallnum,b[i]);
        }
        return smallnum;
    }
    
    static void CheckWar(int a,int b){
        if(a>=b)
        {
            System.out.println("War");
        }
        else
        {
            System.out.println("No War");
        }
    }
}