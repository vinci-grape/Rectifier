import java.util.*;
import java.io.*;
public class atcoder_AGC005_B {
    public static void main ( String [ ] args ) {
        Scanner sc = new Scanner ( new BufferedReader ( new InputStreamReader ( System.in ) ) ) ;
        int n = sc.nextInt ( ) ;
        int [ ] a = new int [ n ] ;
        int [ ] par = new int [ n ] ;
        int [ ] rank = new int [ n ] ;
        int [ ] size = new int [ n ] ;
        for ( int i = 0 ; i < n ; i ++ ) {
            a [ i ] = sc.nextInt ( ) ;
            par [ i ] = i ;
            rank [ i ] = 1 ;
            size [ i ] = 1 ;
        }
        int [ ] b = new int [ n ] ;
        for ( int i = 0 ; i < n ; i ++ ) b [ a [ i ] - 1 ] = i ;
        int c = 0 ;
        for ( int k = n - 1 ; k >= 0 ; k -- ) {
            int l = 1, r = 1 ;
            if ( k > 0 && a [ k - 1 ] > a [ k ] ) {
                l += size [ find ( k - 1 ) ] ;
                union ( k - 1, k ) ;
            }
            if ( k + 1 < n && a [ k + 1 ] > a [ k ] ) {
                r += size [ find ( k + 1 ) ] ;
                union ( k + 1, k ) ;
            }
            c += l * r * a [ k ] ;
        }
        System.out.println ( c ) ;
    }
    public static int find ( int x ) {
        return x == par [ x ]? x : ( par [ x ] = find ( par [ x ] ) ) ;
    }
    public static void union ( int x, int y ) {
        int px = find ( x ) ;
        int py = find ( y ) ;
        if ( px!= py ) {
            if ( rank [ px ] < rank [ py ] ) {
                par [ px ] = py ;
                size [ py ] += size [ px ] ;
            } else {
                par [ py ] = px ;
                size [ px ] += size [ py ] ;
                if ( rank [ px ] == rank [ py ] ) rank [ px ] ++ ;
            }
        }
    }
}