import java.util.*;
import java.io.*;
public class atcoder_ARC086_B {
    public static void main ( String [ ] args ) {
        Scanner sc = new Scanner ( System.in );
        int N = sc.nextInt ( );
        int [ ] a = new int [ N ];
        for ( int i = 0 ; i < N ; i ++ ) a [ i ] = sc.nextInt ( );
        int max_val = 0, max_sign = 0, max_index = - 1;
        for ( int i = 0 ; i < N ; i ++ ) {
            if ( Math.abs ( a [ i ] ) > max_val ) {
                max_val = Math.abs ( a [ i ] );
                max_sign = a [ i ] > 0? 1 : - 1;
                max_index = i;
            }
        }
        if ( max_sign == 0 ) System.out.println ( 0 );
        else {
            System.out.println ( 2 * N - 1 );
            for ( int i = 0 ; i < N ; i ++ ) {
                System.out.println ( max_index + 1, i + 1 );
            }
            for ( int i = 0 ; i < N - 1 ; i ++ ) {
                System.out.println ( i + 1, i + 2 );
            }
        }
    }
}