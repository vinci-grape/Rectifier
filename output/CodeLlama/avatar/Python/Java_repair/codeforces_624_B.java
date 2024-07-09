import java.util.*;
import java.lang.*;
import java.io.*;
public class codeforces_624_B {
    public static void main (String[] args) {
        Scanner sc = new Scanner ( System.in );
        int n = sc.nextInt ( );
        Long a [] = new Long [ n ];
        for ( int i = 0 ; i < n ; i ++ ) {
            a [ i ] = sc.nextLong ( );
        }
        Arrays.sort ( a , Collections.reverseOrder ( ) );
        long pre = Integer.MAX_VALUE;
        long ans = 0;
        for ( int j = 0 ; j < n ; j ++ ) {
            ans += Math.max ( 0 , Math.min ( pre - 1 , a [ j ] ) );
            pre = Math.max ( 0 , Math.min ( pre - 1 , a [ j ] ) );
        }
        System.out.println ( ans );
    }
}