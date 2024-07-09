import java.util.*;
import java.io.*;
import java.lang.*;
import java.math.*;
import java.util.regex.*;

public class atcoder_ABC120_C {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        long[] a = new long[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextLong();
        }
        long ans = 0;
        for(int i=0; i < n; i++){
            for(int j=i+1; j < n; j++){
                if(a[i] > a[j]){
                    ans += Math.min(a[i], a[j]) * 2;
                }
            }
        }
        System.out.println(ans);
    }
}