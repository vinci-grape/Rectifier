import java.util.*;
import java.lang.*;
import java.io.*;
class atcoder_ABC133_B {
    public static void main ( String[] args ) {
        Scanner sc = new Scanner ( System.in );
        int n = sc.nextInt ( );
        int d = sc.nextInt ( );
        int count = 0;
        ArrayList < Integer > [] points = new ArrayList < > [ n ];
        for ( int i = 0 ; i < n ; i++ )
            points [ i ] = new ArrayList < > ( );
        for ( int i = 0 ; i < n ; i++ ) {
            for ( int j = 0 ; j < d ; j++ ) {
                int x = sc.nextInt ( );
                points [ i ].add ( x );
            }
        }
        for ( int i = 0 ; i < n ; i++ ) {
            for ( int j = i + 1 ; j < n ; j++ ) {
                double dist = 0.0;
                for ( int k = 0 ; k < d ; k++ ) {
                    dist += Math.pow ( points [ i ].get ( k ) - points [ j ].get ( k ), 2 );
                }
                if ( Math.sqrt ( dist ) % 1 == 0 )
                    count++;
            }
        }
        System.out.println ( count );
    }
}