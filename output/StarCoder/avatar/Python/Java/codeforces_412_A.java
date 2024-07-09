import java.util.*;
public class codeforces_412_A {
    public static void main ( String [ ] args )
    {
        Scanner sc = new Scanner ( System.in );
        int n = sc.nextInt ( );
        int k = sc.nextInt ( );
        String [ ] v = new String [ n ];
        for ( int i = 0 ; i < n ; i ++ )
            v [ i ] = sc.next ( );
        int f = k - 1 < n - k;
        int m = Math.min ( k - 1, n - k );
        String [ ] a = new String [ 2 * m + 2 * f ];
        for ( int i = 0 ; i < m ; i ++ )
            a [ i ] = "LEFT";
        for ( int i = 0 ; i < m ; i ++ )
            a [ m + i ] = "PRINT " + v [ i + k - 1 ];
        for ( int i = 0 ; i < m ; i ++ )
            a [ 2 * m + i ] = "RIGHT";
        for ( int i = 0 ; i < 2 * m + 2 * f ; i ++ )
            System.out.println ( a [ i ] );
    }
}