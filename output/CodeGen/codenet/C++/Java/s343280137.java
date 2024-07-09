import java.util.*;
import java.lang.*;
import java.io.*;

public class s343280137{
    public static void main(String[] args)throws Exception{
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int c = sc.nextInt();
        int[] x = new int[n+1];
        int[] v = new int[n+1];
        for(int i = 1; i < n+1; i++){
            x[i] = sc.nextInt();
            v[i] = sc.nextInt();
        }
        int[] lefttotal = new int[n+1];
        int[] maxlefttotal = new int[n+1];
        for(int i = 1; i < n+1; i++){
            lefttotal[i] = lefttotal[i-1] + v[i];
        }
        for(int i = 1; i < n+1; i++){
            maxlefttotal[i] = Math.max(maxlefttotal[i-1],lefttotal[i]-x[i]);
        }
        int[] righttotal = new int[n+1];
        int[] maxrighttotal = new int[n+1];
        for(int i = 1; i < n+1; i++){
            righttotal[i] = righttotal[i-1] + v[n-i+1];
        }
        for(int i = 1; i < n+1; i++){
            maxrighttotal[i] = Math.max(maxrighttotal[i-1],righttotal[i] -(c - x[n+1-i]));
        }
        int ans = 0;
        for(int i = 1; i < n+1; i++){
            ans = Math.max(ans,lefttotal[i]-x[i]);
            ans = Math.max(ans,lefttotal[i]-2*x[i]+maxrighttotal[n-i]);
            ans = Math.max(ans,righttotal[i]-(c -x[n+1-i]));
            ans = Math.max(ans,righttotal[i]-2*(c-x[n+1-i])+maxlefttotal[n-i]);
        }
        System.out.println(ans);
    }
}