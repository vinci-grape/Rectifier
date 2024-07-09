import java.util.*;
public class codeforces_609_B {
    public static void main ( String [ ] args ) {
        Scanner sc = new Scanner ( System.in );
        int n = sc.nextInt ( );
        int m = sc.nextInt ( );
        int [ ] lst = new int [ n ];
        for ( int i = 0 ; i < n ; i ++ ) lst [ i ] = sc.nextInt ( );
        Map < Integer, Integer > l = new HashMap < > ( );
        for ( int i = 0 ; i < n ; i ++ ) {
            if (! l.containsKey ( lst [ i ] ) ) l.put ( lst [ i ], 1 );
            else l.put ( lst [ i ], l.get ( lst [ i ] ) + 1 );
        }
        int res = 0;
        for ( int i = 0 ; i < n ; i ++ ) {
            if ( l.get ( lst [ i ] ) > 1 ) {
                res += n - i - l.get ( lst [ i ] );
                l.put ( lst [ i ], l.get ( lst [ i ] ) - 1 );
            }
            else {
                res += n - i - 1;
            }
        }
        System.out.println ( res );
    }
}
