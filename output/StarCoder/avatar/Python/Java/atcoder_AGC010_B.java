import java.util.*;
public class atcoder_AGC010_B {
    public static void main ( String [ ] args )
    {
        Scanner sc = new Scanner ( System.in ) ;
        int n = sc.nextInt ( ) ;
        int [ ] a = new int [ n ] ;
        for ( int i = 0 ; i < n ; i ++ )
            a [ i ] = sc.nextInt ( ) ;
        if ( sum ( a ) % ( n * ( n + 1 ) / 2 )!= 0 )
            System.out.println ( "NO" ) ;
        else
        {
            int k = sum ( a ) / ( n * ( n + 1 ) / 2 ) ;
            a [ n ] = a [ 0 ] ;
            if ( sum ( new int [ n ] { k - i + j % n for ( int i = 1 ; i < n ; i ++ ) for ( int j = 0 ; j < i ; j ++ ) } )!= 0 || sum ( new int [ n ] { k - i + j / n >= 0 for ( int i = 1 ; i < n ; i ++ ) for ( int j = 0 ; j < i ; j ++ ) } )!= n )
                System.out.println ( "NO" ) ;
            else
                System.out.println ( "YES" ) ;
        }
    }
    public static int sum ( int [ ] a )
    {
        int s = 0 ;
        for ( int i : a )
            s += i ;
        return s ;
    }
}
