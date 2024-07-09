import java.util.*;
public class atcoder_AGC006_B {
    public static void main ( String [ ] args ) {
        Scanner sc = new Scanner ( System.in );
        int N = sc.nextInt ( );
        int X = sc.nextInt ( );
        if ( X == 1 || X == N * 2 - 1 ) {
            System.out.println ( "No" );
        } else {
            System.out.println ( "Yes" );
            if ( X == N * 2 - 2 ) {
                int [ ] xs = new int [ N - 1 + 2 ];
                for ( int i = 0 ; i < N - 1 + 2 ; i ++ ) {
                    xs [ i ] = i + 1;
                }
                for ( int i = 0 ; i < N - 1 ; i ++ ) {
                    System.out.println ( xs [ i ] );
                }
                for ( int i = 1 ; i < N - 1 ; i ++ ) {
                    System.out.println ( xs [ i ] );
                }
            } else {
                int [ ] ys = new int [ N * 2 ];
                for ( int i = 0 ; i < N * 2 ; i ++ ) {
                    ys [ i ] = i + 1;
                }
                int [ ] xs = new int [ N - 3 + 4 ];
                for ( int i = 0 ; i < N - 3 + 4 ; i ++ ) {
                    xs [ i ] = ys [ i ];
                }
                xs [ N - 3 ] = X + 2;
                xs [ N - 2 ] = X - 1;
                xs [ N - 1 ] = X;
                xs [ N - 0 ] = X + 1;
                for ( int i = 0 ; i < N - 3 ; i ++ ) {
                    System.out.println ( xs [ i ] );
                }
                for ( int i = N - 3 ; i < N * 2 ; i ++ ) {
                    System.out.println ( ys [ i ] );
                }
            }
        }
    }
}


