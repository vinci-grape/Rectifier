import java.util.*;
public class codeforces_216_B {
    public static void main ( String [ ] args ) {
        Scanner sc = new Scanner ( System.in );
        int n = sc.nextInt ( );
        int m = sc.nextInt ( );
        int [ ] g = new int [ n + 1 ];
        for ( int i = 1 ; i <= n ; i ++ ) g [ i ] = new ArrayList < > ( );
        for ( int i = 0 ; i < m ; i ++ ) {
            int a = sc.nextInt ( );
            int b = sc.nextInt ( );
            g [ a ].add ( b );
            g [ b ].add ( a );
        }
        int ans = 0;
        for ( int i = 1 ; i <= n ; i ++ ) {
            if ( g [ i ].size ( ) == 0 ) {
                ans += 1;
                continue;
            }
            Set < Integer > seen = new HashSet < > ( );
            int [ ] dfs = new int [ n + 1 ];
            dfs [ i ] = 1;
            seen.add ( i );
            for ( int j : g [ i ] ) {
                if ( j in seen ) continue;
                dfs [ j ] = 1;
                seen.add ( j );
                for ( int k : g [ j ] ) {
                    if ( k in seen ) continue;
                    dfs [ k ] = 1;
                    seen.add ( k );
                }
            }
            if ( dfs [ i ] == 0 ) ans += 1;
        }
        System.out.println ( ans );
    }
}