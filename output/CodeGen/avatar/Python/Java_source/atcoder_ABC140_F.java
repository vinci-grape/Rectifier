import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
    public static void main ( String [ ] args ) {
        Scanner in = new Scanner ( System.in );
        int N = in.nextInt ( );
        int [ ] S = new int [ N ];
        for ( int i = 0 ; i < N ; i ++ ) {
            S[ i ] = in.nextInt ( );
        }
        Arrays.sort ( S, Collections.reverseOrder ( ) );
        boolean [ ] flag = new boolean [ N ];
        int [ ] cur = new int [ 1 ];
        cur[ 0 ] = S[ 0 ];
        flag[ 0 ] = false;
        for ( int i = 0 ; i < N ; i ++ ) {
            int j = 0;
            int jM = cur.length;
            for ( int k = 0 ; k < S.length ; k ++ ) {
                if ( flag[ k ] && S[ k ] < cur[ j ] ) {
                    cur[ j + 1 ] = S[ k ];
                    j ++;
                    flag[ k ] = false;
                    if ( j == jM ) {
                        break;
                    }
                }
            }
        }
        for ( int i = 0 ; i < cur.length ; i ++ ) {
            if ( flag[ i ] ) {
                return "No";
            }
        }
        return "Yes";
    }
}