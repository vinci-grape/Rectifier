import java.util.*;
public class codeforces_108_B {
    public static void main ( String [ ] args )
    {
        Scanner sc = new Scanner ( System.in );
        int [ ] a = new int [ sc.nextInt ( ) ];
        for ( int i = 0 ; i < a.length ; i++ )
            a [ i ] = sc.nextInt ( );
        Arrays.sort ( a );
        for ( int i = 1 ; i < a.length ; i++ )
            if ( a [ i ]!= a [ i - 1 ] && a [ i ] < a [ i - 1 ] * 2 )
                System.out.println ( "YES" );
            else
                System.out.println ( "NO" );
    }
}