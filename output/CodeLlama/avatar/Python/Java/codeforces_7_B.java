import java.util.*;
import java.lang.*;
import java.io.*;

public class codeforces_7_B {
    public static void main (String[] args) {
        Scanner sc = new Scanner ( System.in );
        int t = sc.nextInt ( );
        int m = sc.nextInt ( );
        int [] alocuente = new int [ m ];
        int ind = 1;
        for ( int i = 0; i < t; i++ ) {
            String [] op = sc.nextLine ( ).split ( " " );
            if ( op [ 0 ].equals ( "alloc" ) ) {
                int pos = 0;
                for ( int j = 0; j < m; j++ ) {
                    if ( alocuente [ j ] == 0 ) {
                        pos += 1;
                        if ( pos == Integer.parseInt ( op [ 1 ] ) ) {
                            alocuente [ j - Integer.parseInt ( op [ 1 ] ) + 1 : j + 1 ] = new int [ Integer.parseInt ( op [ 1 ] ) ];
                            Arrays.fill ( alocuente [ j - Integer.parseInt ( op [ 1 ] ) + 1 : j + 1 ], ind );
                            System.out.println ( ind );
                            ind += 1;
                            break;
                        }
                    }
                    else {
                        pos = 0;
                    }
                }
                if ( pos == 0 ) {
                    System.out.println ( "NULL" );
                }
            }
            if ( op [ 0 ].equals ( "erase" ) ) {
                int pos = 0;
                if ( Integer.parseInt ( op [ 1 ] ) == 0 || !Arrays.asList ( alocuente ).contains ( Integer.parseInt ( op [ 1 ] ) ) ) {
                    System.out.println ( "ILLEGAL_ERASE_ARGUMENT" );
                }
                else {
                    for ( int j = 0; j < m; j++ ) {
                        if ( Integer.parseInt ( op [ 1 ] ) > 0 && alocuente [ j ] == Integer.parseInt ( op [ 1 ] ) ) {
                            alocuente [ j ] = 0;
                        }
                    }
                }
            }
            if ( op [ 0 ].equals ( "defragment" ) ) {
                int cnt = 0;
                cnt = alocuente.length - Arrays.asList ( alocuente ).indexOf ( 0 );
                alocuente = Arrays.stream ( alocuente ).filter ( x -> x != 0 ).toArray ( );
                for ( int j = 0; j < cnt; j++ ) {
                    alocuente [ alocuente.length ] = 0;
                }
            }
        }
    }
}