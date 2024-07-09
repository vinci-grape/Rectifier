import java.util.*;
public class codeforces_400_A {
    public static void main ( String arg [ ] )
    {
        Scanner sc = new Scanner ( System.in );
        int t = sc.nextInt ( );
        while ( t -- > 0 )
        {
            int n = sc.nextInt ( );
            int arr [ ] = new int [ n ];
            for ( int i = 0 ; i < n ; i ++ )
                arr [ i ] = sc.nextInt ( );
            int ans = 0;
            for ( int i = 1 ; i <= 12 ; i ++ )
                if ( n % i == 0 )
                    if ( help ( arr, n, i ) )
                        ans ++ ;
            System.out.println ( ans );
        }
    }
    public static boolean help ( int arr [ ], int n, int k )
    {
        int sum = 0;
        for ( int i = 0 ; i < n ; i += k )
            sum += arr [ i ];
        if ( sum == k )
            return true;
        return false;
    }
}