import java.util.*;
public class codeforces_189_A {
    public static void main ( String [ ] args ) {
        Scanner sc = new Scanner ( System.in ) ;
        int length = sc.nextInt ( ) ;
        int [ ] arr = new int [ 4 ] ;
        for ( int i = 0 ; i < 4 ; i++ )
            arr [ i ] = sc.nextInt ( ) ;
        Arrays.sort ( arr ) ;
        int ans = 0 ;
        if ( arr [ 0 ] == arr [ 1 ] ) {
            int k = 0 ;
            for ( int i = 0 ; i <= length / arr [ 2 ] ; i++ ) {
                int check = length - i * arr [ 2 ] ;
                if ( check >= 0 && check % arr [ 0 ] == 0 ) {
                    k = check / arr [ 0 ] ;
                    ans = Math.max ( ans, k + i ) ;
                }
            }
        } else {
            int k = 0 ;
            for ( int i = 0 ; i <= length / arr [ 2 ] ; i++ )
                for ( int j = 0 ; j <= length / arr [ 1 ] ; j++ ) {
                    int check = length - i * arr [ 2 ] - j * arr [ 1 ] ;
                    if ( check >= 0 && check % arr [ 0 ] == 0 ) {
                        k = check / arr [ 0 ] ;
                        ans = Math.max ( ans, k + i + j ) ;
                    }
                }
        }
        System.out.println ( ans ) ;
    }
}