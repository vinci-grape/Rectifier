import java.util.*;
public class codeforces_274_A {
    public static void main ( String [ ] args )
    {
        Scanner sc = new Scanner ( System.in ) ;
        int n = sc.nextInt ( ) ;
        int k = sc.nextInt ( ) ;
        int [ ] arr = new int [ n ] ;
        for ( int i = 0 ; i < n ; i++ )
            arr [ i ] = sc.nextInt ( ) ;
        Arrays.sort ( arr ) ;
        Set < Integer > different = new HashSet < > ( ) ;
        int temp = 0 ;
        for ( int x : arr )
            if ( x % k!= 0 ||! x // k in different )
                different.add ( x ) ;
            temp = Math.max ( temp, different.size ( ) ) ;
        System.out.println ( temp ) ;
    }
}