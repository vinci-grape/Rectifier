import java.util.*;
import java.lang.*;
import java.io.*;

public class atcoder_ABC133_E {
    public static void main ( String[] args ) {
        Scanner sc = new Scanner ( System.in );
        int N = sc.nextInt ( );
        int K = sc.nextInt ( );
        int mod = 1000000007;
        ArrayList < Integer > [] graph = new ArrayList [ N ];
        for ( int i = 0 ; i < N ; i++ ) {
            graph [ i ] = new ArrayList < Integer > ( );
        }
        for ( int i = 0 ; i < N - 1 ; i++ ) {
            int a = sc.nextInt ( );
            int b = sc.nextInt ( );
            graph [ a - 1 ].add ( b - 1 );
            graph [ b - 1 ].add ( a - 1 );
        }
        long ans = dfs ( 0 , - 1 , K );
        System.out.println ( ans );
    }
    public static long dfs ( int fro , int to , int f ) {
        long caseNum = f;
        int colorNum = K - 1;
        if ( f == K ) {
            colorNum = K - 2;
        }
        for ( int u : graph [ fro ] ) {
            if ( u == to ) {
                continue;
            }
            long pat = dfs ( u , fro , colorNum );
            if ( pat == 0 ) {
                caseNum = 0;
                break;
            }
            caseNum = ( caseNum * pat ) % mod;
            colorNum--;
        }
        return caseNum;
    }
}