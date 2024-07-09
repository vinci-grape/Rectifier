import java.util.*;
public class codeforces_462_B {
    public static void main ( String [ ] args )
    {
        Scanner sc = new Scanner ( System.in ) ;
        int n = sc.nextInt ( ) ;
        int k = sc.nextInt ( ) ;
        String s = sc.next ( ) ;
        int [ ] count = new int [ 26 ] ;
        for ( int i = 0 ; i < n ; i ++ )
        {
            count [ s.charAt ( i ) - 'A' ] ++ ;
        }
        Arrays.sort ( count ) ;
        int res = 0 ;
        for ( int i = 25 ; i >= 0 ; i -- )
        {
            if ( count [ i ] >= k )
            {
                res += k * k ;
                System.out.println ( res ) ;
                return ;
            }
            k -= count [ i ] ;
            res += count [ i ] * count [ i ] ;
        }
        System.out.println ( res ) ;
    }
}