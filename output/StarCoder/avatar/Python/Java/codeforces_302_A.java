import java.util.*;
public class codeforces_302_A {
    public static void main ( String [ ] args )
    {
        Scanner sc = new Scanner ( System.in ) ;
        int n = sc.nextInt ( ) ;
        int m = sc.nextInt ( ) ;
        int sa = 0 ;
        for ( int i = 0 ; i < n ; i ++ )
            if ( sc.next ( ).charAt ( 0 ) == '-' )
                sa ++ ;
        sa = Math.min ( n - sa, sa ) ;
        StringBuilder sb = new StringBuilder ( ) ;
        for ( int i = 0 ; i < m ; i ++ )
        {
            int a = sc.nextInt ( ) ;
            int b = sc.nextInt ( ) ;
            b -= a ;
            if ( b % 2 == 1 && b <= sa << 1 )
                sb.append ( "1\n" ) ;
            else
                sb.append ( "0\n" ) ;
        }
        System.out.print ( sb ) ;
    }
}

