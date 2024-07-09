import java.util.*;
public class atcoder_ABC122_D {
    public static void main ( String [ ] args ) {
        Scanner sc = new Scanner ( System.in );
        int n = sc.nextInt ( );
        int mod = 1000000007;
        int [ ] memo = new int [ n + 1 ];
        memo [ 0 ] = 1;
        for ( int i = 1 ; i <= n ; i ++ ) {
            for ( int j = 0 ; j < 4 ; j ++ ) {
                for ( int k = 0 ; k < 4 ; k ++ ) {
                    if ( j!= k && ( j == 0 || j == 2 ) && ( k == 1 || k == 3 ) ) {
                        continue;
                    }
                    if ( j == 0 ) {
                        memo [ i ] = ( memo [ i ] + memo [ i - 1 ] ) % mod;
                    } else if ( j == 1 ) {
                        memo [ i ] = ( memo [ i ] + memo [ i - 2 ] ) % mod;
                    } else if ( j == 2 ) {
                        memo [ i ] = ( memo [ i ] + memo [ i - 3 ] ) % mod;
                    } else {
                        memo [ i ] = ( memo [ i ] + memo [ i - 4 ] ) % mod;
                    }
                }
            }
        }
        System.out.println ( memo [ n ] );
    }
}