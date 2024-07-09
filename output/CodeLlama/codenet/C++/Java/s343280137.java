import java.util.Scanner;

public class s343280137 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n,c;
        n = sc.nextLong();
        c = sc.nextLong();
        long[] x = new long[n+1];
        long[] v = new long[n+1];
        for(int i = 1; i < n+1; i++){
            x[i] = sc.nextLong();
            v[i] = sc.nextLong();
        }
        long[] lefttotal = new long[n+1];
        long[] maxlefttotal = new long[n+1];
        for(int i = 1; i < n+1; i++){
            lefttotal[i] = lefttotal[i-1] + v[i];
        }
        for(int i = 1; i < n+1; i++){
            maxlefttotal[i] = Math.max(maxlefttotal[i-1],lefttotal[i]-x[i]);
        }
        long[] righttotal = new long[n+1];
        long[] maxrighttotal = new long[n+1];
        for(int i = 1; i < n+1; i++){
            righttotal[i] = righttotal[i-1] + v[n-i+1];
        }
        for(int i = 1; i < n+1; i++){
            maxrighttotal[i] = Math.max(maxrighttotal[i-1],righttotal[i] -(c - x[n+1-i]));
        }
        long ans = 0;
        for(int i = 1; i < n+1; i++){
            ans = Math.max(ans,lefttotal[i]-x[i]);
            ans = Math.max(ans,lefttotal[i]-2*x[i]+maxrighttotal[n-i]);
            ans = Math.max(ans,righttotal[i]-(c -x[n+1-i]));
            ans = Math.max(ans,righttotal[i]-2*(c-x[n+1-i])+maxlefttotal[n-i]);
        }
        System.out.println(ans);
    }
}