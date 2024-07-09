import java.util.*;
public class atcoder_ABC165_C {
    public static void main ( String [ ] args ) {
        Scanner sc = new Scanner ( System.in );
        int N = sc.nextInt ( );
        int M = sc.nextInt ( );
        int Q = sc.nextInt ( );
        int [ ] a = new int [ Q ];
        int [ ] b = new int [ Q ];
        int [ ] c = new int [ Q ];
        int [ ] d = new int [ Q ];
        for ( int i = 0 ; i < Q ; i ++ ) {
            a [ i ] = sc.nextInt ( );
            b [ i ] = sc.nextInt ( );
            c [ i ] = sc.nextInt ( );
            d [ i ] = sc.nextInt ( );
        }
        solve ( N, M, Q, a, b, c, d );
    }
    public static void solve ( int N, int M, int Q, int [ ] a, int [ ] b, int [ ] c, int [ ] d ) {
        int res = 0;
        rec ( N, M, Q, a, b, c, d, 0, 0, res );
        System.out.println ( res );
    }
    public static void rec ( int N, int M, int Q, int [ ] a, int [ ] b, int [ ] c, int [ ] d, int i, int sum, int res ) {
        if ( i == N ) {
            int ans = 0;
            for ( int j = 0 ; j < Q ; j ++ ) {
                if ( sum - a [ j ] == c [ j ] ) {
                    ans += d [ j ];
                }
            }
            res = Math.max ( res, ans );
            return;
        }
        int last_max = 1;
        if ( i > 0 ) {
            last_max = a [ i - 1 ];
        }
        for ( int j = last_max ; j <= M ; j ++ ) {
            rec ( N, M, Q, a, b, c, d, i + 1, sum + j, res );
        }
    }
}